#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int missingNumber(vector<int> &nums){
        int n = nums.size();
        int XOR = 0;

        for(int i = 0; i<=n; i++){
            XOR ^= i;
        }
        for(int val : nums){
            XOR ^= val;
        }
        return XOR;
    }
};