class Solution {
public:
    int singleNumber(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int n = nums.size();
      if(n==1) return nums[0];
      int i=1;
        while(i<n){
            if(nums[i-1]!=nums[i]) return nums[i-1];
            i+=2;
        }
        return nums[n-1];
        
    }
};