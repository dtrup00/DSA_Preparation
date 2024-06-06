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
    ListNode* reverseList(ListNode* head) {
        if(!head) return NULL;
        vector<int> soln;
        ListNode *temp = head;
        while(temp != NULL) {
            soln.push_back(temp->val);
            temp = temp->next;
        }
        reverse(soln.begin(), soln.end());

        ListNode *curr = new ListNode(soln[0]);
        ListNode *tempOne = curr;

        for(size_t i=1; i<soln.size();) {
            tempOne->next = new ListNode(soln[i++]);
            tempOne = tempOne->next;
        }
        return curr;
    }
};