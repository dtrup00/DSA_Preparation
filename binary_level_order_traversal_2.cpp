/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;

        queue<TreeNode*> dq;
        dq.push(root);

        while(!dq.empty()) {
            int s = dq.size(); 
            vector<int> vec;

            for(int i=0; i<s; i++) {
                TreeNode* curr = dq.front();
                dq.pop();

                if(curr->left) dq.push(curr->left);
                if(curr->right) dq.push(curr->right);
                vec.push_back(curr->val);
            }
            ans.push_back(vec);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};