class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int* number = new int[n * n + 1]();
        // memset(number, 0, n);
        int a, b;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (number[grid[i][j]] == 0) {
                    number[grid[i][j]] = 1;
                }
                else if (number[grid[i][j]] == 1) {
                    a = grid[i][j];
                    number[grid[i][j]] = 2;

                }
            }
        }
        for (int i = 1; i < n * n + 1; ++i) {
            if (number[i] == 0) {
                b = i;
            }
        }
        vector<int> ans = { a, b };
        return ans;
    }
};