#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int sum = 0;
        int dup = n;
        if(n<0) return false;
        
        
        while(n != 0){
            int LD = n % 10;
            sum += (LD*LD*LD);
            n /= 10;
        }
        return dup == sum;
    }
};