#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>freq;
        int cnt = 0;

        for(int i = 0; i<n; i++){
            int num = nums[i];
            cnt += freq[num];
            freq[num]++;

        }
        return cnt;
    }
};

