#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& nums){
        int n = nums.size();
        int zeros = 0;

        for(int num : nums){
            if(num == 0) zeros++;
        }
        int i = n - 1;
        int j = n + zeros - 1;

        while(i >= 0){
            if(j < n){
                nums[j] = nums[i];
            }
            if(nums[i] == 0){
                j--;
                if(j < n){
                    nums[j] = 0;
                }
            }
            i--;
            j--;
        }
    }
};