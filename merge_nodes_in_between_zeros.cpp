/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        if(!head) return NULL;

        vector<int> arr;
        ListNode* temp = head->next;

        int count = 0;
        while(temp != NULL) {
            if(temp->val != 0) { count += temp->val; }
            else {
                arr.push_back(count);
                count = 0;
            }
            temp = temp->next;
        }

        if(arr.empty()) return NULL;

        ListNode* curr = new ListNode(arr[0]);
        ListNode* currNow = curr;
        for(size_t i=1; i<arr.size(); ++i) {
            currNow->next = new ListNode(arr[i]);
            currNow = currNow->next;
        }
        return curr;
    }
};