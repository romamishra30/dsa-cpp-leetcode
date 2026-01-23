#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAltitude(vector<int>& gain){
        int n = gain.size();
        int altitude = 0;
        int maxAltitude = 0;

        for(int i = 0; i<n; i++){
            int g = gain[i];
            altitude += gain[i];
            
            maxAltitude = max(maxAltitude, altitude);
        }
        return maxAltitude;
    }
};