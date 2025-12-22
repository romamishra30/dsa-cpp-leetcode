#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>freq;
        unordered_set<int>st;

        for(int i = 0; i<arr.size(); i++){
            freq[arr[i]]++;
        }
        for(auto it : freq){
            if(!st.insert(it.second).second)
            return false;
        }
        return true;
    }
};