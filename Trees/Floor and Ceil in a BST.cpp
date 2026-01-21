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

class Solution {
public:
    vector<int> floorCeilOfBST(TreeNode* root, int val){
        int floor = -1, ceil = -1;

        while(root != nullptr){
            if(root->val == val){
                ceil = root->val;
                floor = root->val;
                break;
            }else if(root->val > val){
                ceil = root->val;
                root = root->left;
            }else{
                floor = root->val;
                root = root->right;
            }
        }
        return {floor, ceil};
    }
};

//TC = O(LOG N)
// SC = O(1)