class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> res;
        unordered_map<int,int> m1;
        int n = grid.size();
        for(int i = 1 ; i <= n*n ; i++)
        {
            m1[i]++;
        }
        for(int i = 0 ; i < n ; i++ )
        {
            for(int j = 0 ; j < grid[i].size(); j++)
            m1[grid[i][j]]++;
        }
        for(auto& it:m1)
        {
            if(it.second==3)
            res.push_back(it.first);
        }
        for(auto& it: m1)
        {
            if(it.second==1)
            res.push_back(it.first);
        }
    
        return res;
    }
};
