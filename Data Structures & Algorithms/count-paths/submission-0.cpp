class Solution {
public:
    int uniquePaths(int m, int n) {
        // Create DP grid
        vector<vector<int>> grid(m, vector<int>(n, 0));

        // Fill the grid
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // First row or first column
                if (i == 0 || j == 0) {
                    grid[i][j] = 1;
                } else {
                    grid[i][j] = grid[i][j - 1] + grid[i - 1][j];
                }
            }
        }

        // Return ways to reach bottom-right cell
        return grid[m - 1][n - 1];
    }
};
