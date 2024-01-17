class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       bool flag = true;
       unordered_map<int,int> res;
       for(int i = 0 ; i < arr.size() ; i++)
       {
           res[arr[i]]++;
       } 
       arr.clear();
       for(auto & c : res)
       {
           arr.push_back(c.second);
       }
       sort(arr.begin(),arr.end());
       for(int i = 0 ; i < arr.size()-1;i++)
       {
           if(arr[i]==arr[i+1])
           return false;
       }
       return flag;
    }
};
