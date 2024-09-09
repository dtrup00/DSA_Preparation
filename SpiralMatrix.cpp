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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1));

        int rowStart = 0, rowEnd = m-1, colStart = 0, colEnd = n-1;
        while(head) {
            for(int i=colStart; i<=colEnd && head; i++) {
                ans[rowStart][i] = head->val;
                head = head->next;
            }
            rowStart++;

            for(int i=rowStart; i<=rowEnd && head; i++) {
                ans[i][colEnd] = head->val;
                head = head->next;
            }
            colEnd--;

            for(int i=colEnd; i>=colStart && head; i--) {
                ans[rowEnd][i] = head->val;
                head = head->next;
            }
            rowEnd--;

            for(int i=rowEnd; i>=rowStart && head; i--) {
                ans[i][colStart] = head->val;
                head = head->next;
            }
            colStart++;

        }
        return ans;
    }
};