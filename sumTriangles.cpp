#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int eliminateMaximum(vector<int>& dist,vector<int>& speed) {
        int count = 0;
        int n = dist.size();
        for (int i = 0; i < n; i++) {
            if (dist[i] % speed[i] != 0) {
                dist[i] = (dist[i] / speed[i]) + 1;
            } else {
                dist[i] /= speed[i];
            }
        }
        sort(dist.begin(), dist.end());

        for (int i = 0; i < n; i++) {
            dist[i] -= i; 
            if (dist[i] <= 0) { 
                break;
            }
            count++; 
        }
        return count;
    }
};
