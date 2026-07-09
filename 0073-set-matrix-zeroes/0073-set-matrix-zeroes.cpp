class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n= matrix[0].size();
        vector<bool> row(m,false);
        vector<int> col(n,false);
         for( int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                if(matrix[i][j]==0){
                  row[i]=true;
                  col[j]=true;
                }
            }
         }
         
             
            for( int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(row[i] || col[j]){
                    matrix[i][j]=0;
                }
            }
         }
         }
    
};