#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums){
        int largest = -1;
        int sLargest = -1;
        int index = -1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > largest){
                sLargest = largest;
                largest = nums[i];
                index = i;
            }else if(nums[i] > sLargest){
                sLargest = nums[i];
            }
        }
        if(largest >= 2 * sLargest){
            return index;
        }
        return -1;
    }
};