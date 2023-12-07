class Solution {
protected:
    vector<int> merge(vector<int>& nums, int left, int mid, int right) 
    {
        vector<int> res2;
        int l = left;
        int r = mid + 1;
        while (l<= mid && r<=right) 
        {
            if (nums[l] < nums[r]) 
            {
                res2.push_back(nums[l]);
                l++;
            } else 
            {
                res2.push_back(nums[r]);
                r++;
            }
        }
        while (l <= mid) 
        {
            res2.push_back(nums[l]);
            l++;
        }
        while (r <= right) 
        {
            res2.push_back(nums[r]);
            r++;
        }
        return res2;
    }

    void mergeSort(vector<int>& nums, int left, int right) 
    {
        if (left >= right) 
        return ;
        int mid = left + (right - left) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        vector<int> merged = merge(nums, left, mid, right);
        for (int i = left; i <= right; i++) 
        {
            nums[i] = merged[i - left];
        }
    }

public:
    vector<int> sortArray(vector<int>& nums) 
    {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
