#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        int sum = 0;

        for(int i = 1; i<n;i++){
            sum += min(timeSeries[i] - timeSeries[i-1], duration);
        }
        return sum + duration;
    }
};