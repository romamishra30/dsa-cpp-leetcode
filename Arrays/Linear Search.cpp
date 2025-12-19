#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        int n = nums.size();

        for(int i = 0; i<n; i++){
            if(nums[i] == target){
                return i;
            }
        }
      return -1;
    }
};

// TC = O(N)
// SC = O(1)