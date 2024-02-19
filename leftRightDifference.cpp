class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        left.push_back(0);
        right.push_back(0);
        for(int i = 0 ; i < nums.size()-1;i++)
        {
            int x=0;
            x = left[i] + nums[i];
            left.push_back(x);
        }
        std::reverse(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size()-1;i++)
        {
            int x=0;
            x = right[i] + nums[i];
            right.push_back(x);
        }
        nums.clear();
         std::reverse(right.begin(),right.end());
        for(int i = 0 ;i<right.size();i++)
        {
            int x = abs(left[i]-right[i]);
            nums.push_back(x);
        }
        return nums; 
    }
};
