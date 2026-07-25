class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
     double pro=1;
    //  ans[0]=1;
    for(int i=1;i<n;i++){
        
      ans[i]=ans[i-1]*nums[i-1];
    }
    for(int j=n-2;j>=0;j--){
        pro=pro*nums[j+1];
        ans[j]*=pro;
    }
    return ans;
   


    }
};