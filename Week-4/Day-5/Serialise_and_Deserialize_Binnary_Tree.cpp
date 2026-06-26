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

class Codec {
public:

    void helper(TreeNode* root, string& s) {
        if (root == NULL) {
            s += "N,";
            return;
        }
        s += to_string(root->val) + ",";
        helper(root->left, s);
        helper(root->right, s);
    }

    string serialize(TreeNode* root) {
        string s = "";
        helper(root, s);
        return s;
    }

    TreeNode* build(vector<string>& nodes, int& idx) {
        if (nodes[idx] == "N") {
            idx++;
            return NULL;
        }
        TreeNode* root = new TreeNode(stoi(nodes[idx]));
        idx++;
        root->left = build(nodes, idx);
        root->right = build(nodes, idx);
        return root;
    }

    TreeNode* deserialize(string data) {
        vector<string> nodes;
        string temp = "";
        for (char c : data) {
            if (c == ',') {
                nodes.push_back(temp);
                temp = "";
            } else {
                temp += c;
            }
        }
        int idx = 0;
        return build(nodes, idx);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));