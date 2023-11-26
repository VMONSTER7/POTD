class Solution{
public:
    vector<int> pattern(int N){
       vector<int> res;
       int n=N;
       while(N>0)
       {
           res.push_back(N);
           N=N-5;
       }
      res.push_back(N);
       while(n!=N)
       {
           N=N+5;
           res.push_back(N);
       }
       return res;
    }
};
