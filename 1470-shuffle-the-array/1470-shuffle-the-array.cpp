class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(n*2);
  int x=0;
  int y=n;
        for(int i=0;i < n*2;i++){
            if(i%2==0) {
                ans[i]=nums[x++];
                
            }
            else{
                ans[i]=nums[y++];
                
            }
            
        }
        return ans;
    }
};