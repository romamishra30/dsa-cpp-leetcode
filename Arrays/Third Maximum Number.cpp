#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums){
        int n = nums.size();

        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for(int i =0; i<n; i++){
            int curr = nums[i];

            if(curr == first || curr == second || curr == third)
            continue;

            if(curr > first){
                third = second;
                second = first;
                first = curr;
            }
            else if(curr > second){
                third = second;
                second = curr;
            }
            else if(curr > third){
                third = curr;
            }
        }
        if(third == LLONG_MIN)
        return first; 
             
        return third;
    }
};