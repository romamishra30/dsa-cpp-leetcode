#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums){
        int n = nums.size();
        vector<int> freq(101, 0);

        for(int x : nums){
            freq[x]++;
        }
        int sum = 0;

        for(int x : nums){
            if(freq[x] == 1){
                sum += x;
            }
        }
        return sum;
    }
};