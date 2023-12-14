class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> m1;
        for(int i=0;i<nums.size();i++)
        {
          m1[nums[i]]++;
        }
        int x;
        for(auto& it:m1)
        {
          if(it.second!=2)
          {
            x=it.first;
          }
        }
        return x;
    }
};
