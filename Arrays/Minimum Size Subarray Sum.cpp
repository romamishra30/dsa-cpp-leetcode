#include<bits/stdc++.h>
using namespace std;

class Solution {
public:   
    int minSubArrayLen(int target, vector<int>& nums){
        int n = nums.size();
        int low = 0, sum = 0, ans = INT_MAX;

        for(int right =0; right<n; right++){
            sum += nums[right];
            
            while(sum >= target){
                ans = min(ans, right - low + 1);
            sum -= nums[low];
            low++;
        }
      }
        return (ans == INT_MAX) ? 0 : ans;
    }
};

//sliding window
//TC = O(N)
// SC = O(1)