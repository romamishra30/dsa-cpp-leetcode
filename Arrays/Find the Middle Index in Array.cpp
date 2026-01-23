#include<bits/stdc++.h>
using namespace std;

class Solution {
public:  
    int middleIndex(vector<int>& nums){
        int n = nums.size();
        int totalSum = 0;

        for(int i = 0; i<n; i++){
            totalSum += nums[i];
        }
        int leftSum = 0;

        for(int i =0; i<n; i++){
            int rightSum = totalSum - leftSum - nums[i];

            if(leftSum == rightSum) return i;

            leftSum += nums[i];
        }
        return -1;
    }
};