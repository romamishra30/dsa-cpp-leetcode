#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubarraySum(vector<int>& nums, int l, int r){
        int n = nums.size();
        int ans = INT_MAX;

        for(int i = 0; i<n; i++){
            int sum = 0;
            for(int j = i; j<n; j++){
                sum += nums[j];
                int len = j - i + 1;

                if(len >= l && len <= r && sum >0){
                    ans = min(ans, sum);
                }
            }
        }
        if(ans == INT_MAX){
            return -1;
        }else{
            return ans;
        }
    }
};