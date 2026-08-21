class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        //first approach O(M+N)
        int n = mat.size();
        int m = mat[0].size();
        vector<int> row(n,-1);
        vector<int> col(m,-1);

        for(int i = 0; i < n ; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j]==0){
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < m; j++){
                if(row[i]==0 || col[j] == 0){
                    mat[i][j]=0;
                }
            }
        }
    }
};