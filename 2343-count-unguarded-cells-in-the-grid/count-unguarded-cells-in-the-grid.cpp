class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards,
                       vector<vector<int>>& walls) {
        vector<vector<int>> area(m, vector<int>(n, 0));
        for (vector<int> guard : guards) {
            int r = guard[0];
            int c = guard[1];
            area[r][c] = 1;
        }
        for (vector<int> wall : walls) {
            int r = wall[0];
            int c = wall[1];
            area[r][c] = 2;
        }
        // 1-guard
        // 2-wall
        // 3-guard reach
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                if (area[row][col] == 1) {
                    // North
                    for (int tempRow = row - 1; tempRow >= 0; tempRow--) {
                        if (area[tempRow][col] == 2 ||
                            area[tempRow][col] == 1) {
                            break;
                        }
                        area[tempRow][col] = 3;
                    }
                    // south
                    for (int tempRow = row + 1; tempRow < m; tempRow++) {
                        if (area[tempRow][col] == 2 ||
                            area[tempRow][col] == 1) {
                            break;
                        }
                        area[tempRow][col] = 3;
                    }
                    // west
                    for (int tempCol = col - 1; tempCol >= 0; tempCol--) {
                        if (area[row][tempCol] == 2 ||
                            area[row][tempCol] == 1) {
                            break;
                        }
                        area[row][tempCol] = 3;
                    }
                    // east
                    for (int tempCol = col + 1; tempCol < n; tempCol++) {
                        if (area[row][tempCol] == 2 ||
                            area[row][tempCol] == 1) {
                            break;
                        }
                        area[row][tempCol] = 3;
                    }
                }
            }
        }

        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (area[i][j] == 0) {
                    count++;
                }
            }
        }
        return count;
    }
};