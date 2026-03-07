#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingElement(vector<int>& nums){
        vector<int> ans;

        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++){
            for(int j = nums[i - 1] + 1; j < nums[i]; j++){
                ans.push_back(j);
            }
        }
        return ans;
    }
};