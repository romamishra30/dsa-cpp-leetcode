#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string covertToTitle(int columnNumber){
        string ans;

        while(columnNumber > 0){
            columnNumber--;
            ans.push_back('A' + (columnNumber % 26));
            columnNumber /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
