class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
    int ans = -1;
    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    for (int i = 0; i < nums1.size(); i++) {
        m1[nums1[i]]++;
    }
    
    for (int i = 0; i < nums2.size(); i++) {
        m2[nums2[i]]++;
    }
    
    nums1.clear();
    nums2.clear();
    for(auto& it:m1)
    {
        nums1.push_back(it.first);
    }
    for(auto& it:m2)
    {
        nums2.push_back(it.first);
    }
    
    m1.clear();

    for(int i =0;i<nums1.size();i++)
    {
        m1[nums1[i]]++;
    }
    for(int i =0;i<nums2.size();i++)
    {
        m1[nums2[i]]++;
    }
    
    nums1.clear();
    nums2.clear();
    for(auto& it:m1)
    {
        if(it.second==2)
        {
            nums1.push_back(it.first);
        }
    }
    m1.clear();
    m2.clear();
    sort(nums1.begin(),nums1.end());
    if(nums1.size()!=0)
    {
        ans=nums1[0];
    }
    return ans;
}
};
