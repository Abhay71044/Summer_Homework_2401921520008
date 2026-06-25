#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int d=0;
    int height(TreeNode* root){
        if(root == NULL) return 0;
        int leftAns=height(root->left);
        int rightAns=height(root->right);
        int curr=leftAns+rightAns;
        d=max(d,curr);
        return max(leftAns,rightAns)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return d;
    }
};