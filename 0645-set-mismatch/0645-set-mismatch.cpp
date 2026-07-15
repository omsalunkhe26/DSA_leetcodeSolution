class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int duplicate = -1;
        int missing = -1;
        int n = nums.size();

        // Edge case: missing is 1
        if(nums[0] != 1)
            missing = 1;

        for(int i = 1; i < n; i++) {

            // Duplicate
            if(nums[i] == nums[i-1])
                duplicate = nums[i];

            // Missing number
            else if(nums[i] > nums[i-1] + 1)
                missing = nums[i-1] + 1;
        }

        // Edge case: missing is n
        if(nums[n-1] != n)
            missing = n;

        return {duplicate, missing};
    }
};