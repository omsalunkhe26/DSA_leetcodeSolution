class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
       
        vector<vector<int>> v(m,vector<int>(n));
        if(n*m == original.size()){
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
              v[i][j]=original[k++];
            }
        }
        return v;
        }
        else{
            return {};
        }
    }
};