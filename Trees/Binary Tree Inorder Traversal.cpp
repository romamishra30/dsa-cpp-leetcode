#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
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
       vector<int> inorderTraversal(TreeNode* root){
        vector<int>inorder;
        stack<TreeNode*>st;

        while(root != nullptr || !st.empty()){
            if(root != nullptr){
                st.push(root);
                root = root->left;
            }else{
                if(st.empty() == true)break;
                root = st.top();
                st.pop();

                inorder.push_back(root->val);
                root = root->right;
            }
        }
        return inorder;
    }
};


                       //RECURSIVE CODE
//    void inorder(TreeNode* root, vector<int>& ans){
//        if(root == nullptr) return;

//        inorder(root->left, ans);
//        ans.push_back(root->val);
//        inorder(root->right, ans);
//    }
//    vector<int> inorderTraversal(TreeNode* root) {
//        vector<int> ans;
//        inorder(root, ans);
//        return ans;
//        
//    }
//  };
