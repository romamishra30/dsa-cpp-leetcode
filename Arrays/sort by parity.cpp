#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n - 1;

        while(left<right){
            if(nums[left] % 2 > nums[right] % 2){
                swap(nums[left], nums[right]);
            }
            if(nums[left] % 2 == 0)left++;
            else if(nums[right] % 2 == 1)right--;
        }
        return nums;
    }
};