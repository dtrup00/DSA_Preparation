#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value)
    {
        this->val = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};

vector<vector<int>> getNeighBours(TreeNode *node)
{
    vector<vector<int>> bfs;
    if (node == NULL)
        return bfs;
    deque<TreeNode *> dq;
    dq.push_back(node);

    while (!dq.empty())
    {
        int dqSize = dq.size();
        vector<int> vec;
        for (int i = 0; i < dqSize; i++)
        {
            TreeNode *dqFront = dq.front();
            dq.pop_front();

            if (dqFront->left != NULL)
                dq.push_back(dqFront->left);
            if (dqFront->right != NULL)
                dq.push_back(dqFront->right);
            vec.push_back(dqFront->val);
        }
        bfs.push_back(vec);
    }
    return bfs;
}

int main()
{
    TreeNode *root = new TreeNode(6);
    root->left = new TreeNode(5);
    root->right = new TreeNode(7);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(8);

    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(10);

    vector<vector<int>> ansVector = getNeighBours(root);
    for (int i = 0; i < ansVector.size(); i++)
    {
        for (int j = 0; j < ansVector[i].size(); j++)
        {
            cout << ansVector[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//      6
//    5    7
//  4   8 3   10

//  6 5 7 4 8 3 10