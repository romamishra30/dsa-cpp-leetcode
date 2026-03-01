#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s){
        int n = s.size();

        vector<int> index(256, -1);
        int left = 0, maxLen = 0;

        for(int right = 0; right < n; right++){
            char c = s[right];

            if(index[c] >= left){
                left = index[c] + 1;
            }
            index[c] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};