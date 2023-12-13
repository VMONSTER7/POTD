class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int lsum, rsum;
    int ans = -1;

    for (int i = 0; i < nums.size(); i++) {
        int j = 0;
        lsum = 0;
        while (j < i) {
            lsum = lsum + nums[j];
            j++;
        }

        int k = i+1;
        rsum = 0; 
        while (k < nums.size()) {
            rsum = rsum + nums[k];
            k++;
        }

        if (lsum == rsum) {
            ans = i;
            break; 
        }
    }

    return ans;
}
};
