#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumberThanCurrent(vector<int>& nums){
        int n = nums.size();
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> mpp;

        for(int i = 0; i<sorted.size(); i++){
            if(mpp.find(sorted[i]) == mpp.end()){
                mpp[sorted[i]] = i;
            }
        }
        vector<int> ans;
        for(int i = 0; i<n; i++){
            ans.push_back(mpp[nums[i]]);
        }
        return ans;
    }
};