#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        int largest = INT_MIN, secondLargestElement = INT_MIN;;

        for(int i = 0;i<n; i++){
            if(nums[i] > largest){
                secondLargestElement = largest;
                largest = nums[i];
            }else if(nums[i] > secondLargestElement && nums[i] < largest){
                secondLargestElement = nums[i];
            }
        }
        if(secondLargestElement == INT_MIN)
        return -1;
        else return secondLargestElement; 
       
    }
};

// TC & SC = O(n), O(1)