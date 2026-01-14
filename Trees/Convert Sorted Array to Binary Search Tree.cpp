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
    TreeNode* buildBst(vector<int> &nums, int l, int r){
        int n = nums.size();
        
        if(l>r) return nullptr;

        int mid = (l+r)/2;
        TreeNode* root = new TreeNode(nums[mid]);

        root->left = buildBst(nums, l, mid-1);
        root->right = buildBst(nums, mid+1, r);

        return root;
    }
    TreeNode* sortedArrayToBst(vector<int>& nums){
        return buildBst(nums, 0, nums.size() - 1);
    }
};