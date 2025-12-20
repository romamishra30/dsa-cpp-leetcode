#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int n = nums.size();
        int largest = -1;

        for(int i = 0; i<n; i++){
            if(nums[i] > largest){
                largest = nums[i];
            }
        }
        return largest;
    }
};