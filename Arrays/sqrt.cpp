#include<bits/stdc++.h>
using namespace std;

class Solution {
public: 
    int mySqrt(int x){
        if(x == 0 || x== 1) return x;
        int low = 1, high = x-1;

        while(low<=high){
            long long mid = (low+high)/2;
            long long val = mid * mid;

            if(val <= x){
                low = mid+1;
            }else{
                high = mid - 1;
            }
        }
        return high;
    }
};