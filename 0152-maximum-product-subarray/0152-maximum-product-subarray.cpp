class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
         int maxSum=INT_MIN;
        for(int st=0;st<n;st++){
            int curSum=1;
           
               for(int end=st;end<n;end++){
                   curSum*=nums[end];
                  maxSum=max(maxSum,curSum);
                }
               
               }
        return maxSum;
    }
};