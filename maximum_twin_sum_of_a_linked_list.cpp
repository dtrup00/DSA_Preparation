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
    int pairSum(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        if(arr.size() == 0 || arr.size() == 1) return -1;
        int i=0, j=arr.size()-1;
        int sum = 0;
        while(i < j) {
            sum = max(sum, arr[i++] + arr[j--]);
        }
        return sum;
    }
};