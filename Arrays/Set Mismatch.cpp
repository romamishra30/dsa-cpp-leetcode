#include<bits/stdc++.h>
using namespace std;

class Solution {
public: 
    vector<int> findErrorNums(vector<int>& nums){
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int dup = -1, miss = 1;

        for(int i = 1; i<n; i++){
            if(nums[i] == nums[i-1]){
                dup = nums[i];
            }else if(nums[i] > nums[i-1] + 1){
                miss = nums[i-1] + 1;
            }
        }
        if(nums.back() != nums.size()){
            miss = nums.size();
        }
        return {dup, miss};
    } 
};