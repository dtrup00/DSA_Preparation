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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> nodes, ans;
        ListNode* temp = head;
        while(temp != NULL) {
            nodes.push_back(temp->val);
            temp = temp->next;
        }

        if(nodes.size() < 3) {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        } else {
            vector<int> curr;
            for(int i=1; i<nodes.size()-1; i++) {
                if(
                    (nodes[i] < nodes[i-1] && nodes[i] < nodes[i+1]) || 
                    (nodes[i] > nodes[i-1] && nodes[i] > nodes[i+1])
                ) {
                    curr.push_back(i);
                } 
            }
            if(curr.size() < 2) {
                ans.push_back(-1);
                ans.push_back(-1);
            } else if(curr.size() == 2) {
                ans.push_back(curr[1] - curr[0]);
                ans.push_back(curr[1] - curr[0]);
            } else {
                int minNum = INT_MAX;
                for(int i=curr.size()-1; i>0; i--) {
                    minNum = min(minNum, curr[i] - curr[i-1]);
                }
                ans.push_back(minNum);
                ans.push_back(curr[curr.size()-1] - curr[0]);
            }
        }
        return ans;
    }
};