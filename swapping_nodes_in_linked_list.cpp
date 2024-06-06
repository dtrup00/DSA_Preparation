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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head) return NULL;
        vector<int> ans;
        ListNode* temp = head;
        while(temp != NULL) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        if(ans.size() == 1) return head;
        int i=0, j=ans.size()-1;
        while(i<j) {
            if(i==k-1 || j==k-1) {swap(ans[i++], ans[j--]);}
            else {i++; j--;}
        }
        ListNode* sol = new ListNode(ans[0]);
        ListNode* curr = sol;
        for(size_t i=1; i<ans.size(); i++) {
            curr->next = new ListNode(ans[i]);
            curr = curr->next;
        }
        return sol;
    }
};