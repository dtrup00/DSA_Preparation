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
    int hcf(int a, int b) {
        if (b == 0) 
            return a;
        return hcf(b, a % b);
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head) return NULL;
        ListNode* temp = head;
        vector<int> arr;
        while(temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        if(arr.size() < 2) return head;
        for(size_t i=0; i<arr.size()-1; i++) {
            arr.insert(arr.begin()+(i+1), hcf(arr[i], arr[i+1]));
            ++i;
        }
        ListNode* curr = new ListNode(arr[0]);
        ListNode* tempOne = curr;
        for(size_t i=1; i<arr.size();) {
            tempOne->next = new ListNode(arr[i++]);
            tempOne = tempOne->next;
        }
        return curr;
    }
};