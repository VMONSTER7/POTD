class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
           vector<int> res;
           unordered_map<int,int> m1;
           unordered_map<int,int> m2;
           unordered_map<int,int> m3;
           unordered_map<int,int> m;
           for(int i=0;i<n1;i++)
           m1[A[i]]++;
           for(int i=0;i<n2;i++)
           m2[B[i]]++;
           for(int i=0;i<n3;i++)
           m3[C[i]]++;
          vector<int> a;
          vector<int> b;
          vector<int> c;
           for(auto& it: m1)
               a.push_back(it.first);
           for(auto& it: m2)
               b.push_back(it.first);
           for(auto& it: m3)
               c.push_back(it.first);
           for(int i=0;i<a.size();i++)
           m[a[i]]++;
            for(int i=0;i<b.size();i++)
           m[b[i]]++;
            for(int i=0;i<c.size();i++)
           m[c[i]]++;
           for(auto& it:m)
           {
               if(it.second>=3)
               {
                   int x=it.first;
                   res.push_back(x);
               }
           }
           sort(res.begin(),res.end());
           return res;
        }

};
