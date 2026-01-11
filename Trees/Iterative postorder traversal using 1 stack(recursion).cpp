#include<bits/stdc++.h>
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

 // USING 1 STACK BUT RECURSION

class Solution{
public:
    vector<int> postorderTraversal(TreeNode* root){
        vector<int>postorder;

        if(root == nullptr) return postorder;

        stack<TreeNode*>st;
        st.push(root);

        while(!st.empty()){
            root = st.top();
            st.pop();

            postorder.push_back(root->val);

            if(root->left != nullptr) st.push(root->left);
            if(root->right != nullptr) st.push(root->right);
        }
        reverse(postorder.begin(), postorder.end());
        return postorder;
    }
};

//RECURSIVE CODE

/*void postorder(TreeNode* root, vector<int>& ans){
    if(root == nullptr) return;
    
    postorder(root->left, ans);
    postorder(root->right, ans);
    ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root){
        vector<int> ans;
        postorder(root, ans);
        return ans;
        }*/
       
       
// Time Complexity: O(N)
// Space Complexity: O(N)