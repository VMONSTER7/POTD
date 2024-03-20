class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int ormax = INT_MIN;
        unordered_map<int,int> m1;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            m1[nums[i]]++;
        }
        nums.clear();
        for(auto &it :m1)
        {
           nums.push_back(it.first);
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]>ormax)
            ormax=nums[i];
        }
         sort(nums.begin(),nums.end());
        if(nums.size()<3){
        return ormax;
        }
        else
        {
            return nums[nums.size()-3];
        }
    }
};
