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

    int findPosition(vector<int>inorder,int element,int n){
        for(int i=0;i<n;i++){
            if(inorder[i] == element)
                return i;
        }
        return -1;
    }

    TreeNode* solve(vector<int>inorder,vector<int>preorder,int &index,int inorderstart,int inorderend,int n){
        if(index >= n || inorderstart>inorderend){
            return NULL;
        }
        int element=preorder[index++];
        TreeNode* root=new TreeNode(element);
        int position = findPosition(inorder,element,n);
        root->left=solve(inorder,preorder,index,inorderstart,position-1,n);
        root->right=solve(inorder,preorder,index,position+1,inorderend,n);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size=preorder.size();
        int preOrderIndex=0;
        TreeNode* ans=solve(inorder,preorder,preOrderIndex,0,size-1,size);
        return ans;
    }
};