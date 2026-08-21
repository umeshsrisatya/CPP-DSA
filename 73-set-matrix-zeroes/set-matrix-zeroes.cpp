class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        // first approach O(M+N)
        //  int n = mat.size();
        //  int m = mat[0].size();
        //  vector<int> row(n,-1);
        //  vector<int> col(m,-1);

        // for(int i = 0; i < n ; i++){
        //     for(int j = 0; j < m; j++){
        //         if(mat[i][j]==0){
        //             row[i] = 0;
        //             col[j] = 0;
        //         }
        //     }
        // }
        // for(int i = 0; i < n ; i++){
        //     for(int j = 0; j < m; j++){
        //         if(row[i]==0 || col[j] == 0){
        //             mat[i][j]=0;
        //         }
        //     }
        // }

        // optimal O(1) space considering the first row, col as trace to track
        // 0's
        int n = mat.size();
        int m = mat[0].size();
        int fr = -1;
        int fc = -1;
        for (int i = 0; i < n; i++) {
            if (mat[i][0] == 0) {
                fc = 0;
            }
        }
        for (int j = 0; j < m; j++) {
            if (mat[0][j] == 0) {
                fr = 0;
            }
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (mat[i][j] == 0) {
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (mat[i][0] == 0 || mat[0][j] == 0) {
                    mat[i][j] = 0;
                }
            }
        }
        if (fc == 0) {
            for (int i = 0; i < n; i++) {
                mat[i][0] = 0;
            }
        }
        if (fr == 0) {
            for (int j = 0; j < m; j++) {
                mat[0][j] = 0;
            }
        }
    }
};