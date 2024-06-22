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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;
        vector<int> sol;
        for(int i=0; i<lists.size(); i++) {
            ListNode* temp = lists[i];
            while(temp != NULL) {
                sol.push_back(temp->val);
                temp = temp->next;
            }
        }
        if(sol.size() == 0) return NULL;
        sort(sol.begin(), sol.end());

        ListNode* curr = new ListNode(sol[0]);
        ListNode* tempOne = curr;
        for(size_t i=1; i<sol.size();) {
            tempOne->next = new ListNode(sol[i++]);
            tempOne = tempOne->next;
        }
        return curr;
    }
};