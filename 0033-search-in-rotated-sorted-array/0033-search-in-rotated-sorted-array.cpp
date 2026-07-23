class Solution {
public:
      
    int search(vector<int>& nums, int target,int si,int ei) {
        if(si>ei) return -1;
            int mid=si+(ei-si)/2;
            if(nums[mid]==target){
                return mid;
            }
            
        if(nums[si]<=nums[mid]){
            if(nums[si]<=target && target<=nums[mid]){
               return search(nums,target,si,mid-1);
            }
            else{
               return  search(nums,target,mid+1,ei);
            }
        }
        else{
            if(target>=nums[mid] && target<=nums[ei]){
            return search(nums,target,mid+1,ei);
            }
            else{
                return  search(nums,target,si,mid-1);
            }
        }
       
    }
    int search(vector<int>&nums,int target){
        return search(nums,target,0,nums.size()-1);
      }
    
};