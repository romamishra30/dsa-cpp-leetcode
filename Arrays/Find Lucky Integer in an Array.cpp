#include<bits/stdc++.h>
using namespace std;

class Solution {
public: 
    int findLucky(vector<int>& arr){
        int n = arr.size();
        vector<int> freq(501, 0);

        for(int x : arr){
            freq[x]++;
        }
        int ans = -1;

        for(int x : arr){
            if(freq[x] == x){
                ans = max(ans, x);
            }
        }
        return ans;
    } 
};