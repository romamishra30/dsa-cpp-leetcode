#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs){
        unordered_map<string, vector<string>> mp;

        for(int i = 0; i < strs.size(); i++){
            string originalWord = strs[i];
            string sortedWord = originalWord;

            sort(sortedWord.begin(), sortedWord.end());

            mp[sortedWord].push_back(originalWord);
        }

        vector<vector<string>> result;

        for(auto &pair : mp){
            result.push_back(pair.second);
        }
        return result;
    }
};