class Solution {
public:
    int secondHighest(string s) {
        vector<int> res;
        unordered_map<int,int> res2;
        for(char c : s)
        {
            if(isdigit(c))
            {
                int digit=c-'0';
                res2[digit]++;
            }
        }
       for(auto& it:res2)
       {
           res.push_back(it.first);
       }

        if(res.size() <= 1){
            return -1;
        }
       int largest = -1, secondLargest = -1;
        for(int i=0; i<res.size(); i++){
            largest = max(largest, res[i]);
        }
        for(int i=0; i<res.size(); i++){
            if(res[i] > secondLargest && res[i] < largest){
                secondLargest = res[i];
            }
        }

        return secondLargest;
    }
};
