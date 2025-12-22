#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m1[256] = {};
        int m2[256] = {};

        if (s.size() != t.size())
            return false;

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            if (m1[c1] && m1[c1] != c2)
                return false;
            if (m2[c2] && m2[c2] != c1)
                return false;

                m1[c1] = c2;
                m2[c2] = c1;
        }
        return true;
    }
};

// shorter code is also available.