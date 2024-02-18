class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
     vector<int> res; 

        for(int i = 0; i < sentences.size(); i++) { 
            int count = 1;

            for(int j = 0; j < sentences[i].size(); j++) { 
                if(sentences[i][j] == ' ')
                {
                count++;
                }
            }
            res.push_back(count);
        }

        int maxCount = *max_element(res.begin(), res.end()); 
        return maxCount;
    }
};
