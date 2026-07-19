class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int l=0,r=height.size()-1;
         int wid,hei,waterCon;
        while(l<r){
          wid=r-l;
          hei=min(height[l],height[r]);
          waterCon=hei*wid;
          ans=max(ans,waterCon);

          if(height[l]<height[r]){
            l++;
          }
          else{
            r--;
          }

        }
        return ans;
    }
};