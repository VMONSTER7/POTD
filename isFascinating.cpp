class Solution {
public:
    bool isFascinating(int n) {
       bool flag = true;
       int u = n ; 
        long long ans = 0;
        unordered_map<int,int> m1;
        while (n>0)
        {
            int x= n%10;
            m1[x]++;
            n=n/10;
        }
        n=u;
        u=u*2;
        while (u>0)
        {
            int x= u%10;
            m1[x]++;
            u=u/10;
        }
        n=n*3;
        while (n>0)
        {
            int x= n%10;
            m1[x]++;
            n=n/10;
        }
        for (int i = 1; i <= 9; i++) 
        {
            m1[i]++;
        }
        for(auto& it:m1)
        {
            if(it.second!=2)
            {
                return false;
            }
        }
        return flag;
    }
};
