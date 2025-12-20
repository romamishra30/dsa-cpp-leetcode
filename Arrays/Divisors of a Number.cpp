#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> ans;

        for(int i = 1; i<=sqrt(n); i++){
            if(n % i == 0){
                ans.push_back(i);
            }
            if(n/i != i){
                ans.push_back(n/i);
            } 
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//TC = O(sqrt N) + 0(no of factors * log(no of factors)) + o(number of factors)
// SC = O(N) as using an arr to store the ans;