#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l = 0,r = 0, maxlen = 0, maxf = 0;
        int hash[26] = {0};

        for(int r = 0; r<n; r++){
            hash[s[r] - 'A']++;
            maxf = max(maxf, hash[s[r] - 'A']);

            if((r - l + 1) - maxf > k){
                hash[s[l] - 'A']--;
                l++;
            }
            maxlen = max(maxlen, r - l + 1);
        }
        return maxlen;
    }
};