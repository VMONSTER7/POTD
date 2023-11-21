class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      double  ans;
        unordered_map<int,int> m1;
        for(int i=0;i<nums1.size();i++)
        m1[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)
        m1[nums2[i]]++;
        vector<int> res;
        for(auto& it:m1)
        {
          for(int i=1;i<=it.second;i++)
          res.push_back(it.first);
        }
        sort(res.begin(),res.end());
        int n=res.size();
        if(n%2==0)
        {
          ans=(res[n/2]+res[(n/2)-1])/2.0;
        }
        else
        {
          ans=res[n/2];
        }
        return ans;
    }
};
