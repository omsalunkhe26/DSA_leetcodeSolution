class Solution {
public:
    int search(vector<int>&nums,int target){
        int si=0,ei=nums.size()-1;
      
      while(si<=ei){
        int mid=si+(ei-si)/2;

         if(target==nums[mid]){
            return mid;
         }
         if(nums[si]==nums[mid] && nums[mid]==nums[ei]){
            si++;
            ei--;
         }
         else if(nums[mid]>=nums[si]){
            if(target>=nums[si] && target<nums[mid]){
                ei=mid-1;
            }
            else{
                si=mid+1;
            }

         }
         else{
             if(target>nums[mid] && target<=nums[ei]){
                si=mid+1;
            }
            else{
                ei=mid-1;
            }
         }
      }
      return -1;

      }
    
};