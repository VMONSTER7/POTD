class Solution {
public:
    int numberOfMatches(int n) {
        int match=0;
        while(n>0)
        {
            if(n%2!=0)
            {
                match=match+(n/2)+1;
                n=n/2;
            }
            else if(n%2==0)
            {
                match=match+(n/2);
                n=n/2;
            }
        }
        match=match-1;
        return match;
    }
};
