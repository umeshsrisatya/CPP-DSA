class Solution {
private:
    int generateElement(int n, int r) {
        if (r > n - r) {
            r = n - r;
        }
        long long top = 1;
        long long bottom = 1;
        for (int i = 0; i < r; i++) {
            top = top * (n - i);
            bottom = bottom * (i + 1);
        }
        return top / bottom;
    }

public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++) {
                temp.push_back(generateElement(i , j ));
            }
            ans.push_back(temp);
        }
        return ans;
    }
};