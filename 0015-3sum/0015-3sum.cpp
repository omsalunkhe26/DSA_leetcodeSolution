class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        int i=0,j,k;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        while(i<n-2){
            if(i>0 && nums[i]==nums[i-1]){
                i++;
                continue;
            }
            int target=-nums[i];
            j=i+1;
            k=n-1;
            while(j<k){
                int s=nums[j]+nums[k];
                if(s==target){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                    while(j<k && nums[k]==nums[k+1]){
                        k--;
                    }
                }
                
                else if(s<target){
                    j++;

                }
                else{
                    k--;
                }
                
            }
            i++;
        }
        return ans;
    }
};