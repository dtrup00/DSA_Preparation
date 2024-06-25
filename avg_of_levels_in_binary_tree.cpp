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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(root == NULL) return ans;
        queue<TreeNode*> dq;
        dq.push(root);
        while(!dq.empty()) {
            long long int avg = 0, n = dq.size();
            vector<int> vec;

            for(int i=0; i<n; i++) {
                TreeNode* temp = dq.front();
                dq.pop();

                if(temp->left) dq.push(temp->left);
                if(temp->right) dq.push(temp->right);
                avg += temp->val; vec.push_back(avg);
            }
            ans.push_back(avg/(1.0 * vec.size()));
        }
        return ans;
    }
};