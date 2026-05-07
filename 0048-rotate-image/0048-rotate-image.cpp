class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
      vector<vector<int>>v(n,vector<int>(n,0));
        

      for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            v[j][n-1-i]=matrix[i][j];
        }
       
      }
       matrix=v;
      
    
       

    }
};