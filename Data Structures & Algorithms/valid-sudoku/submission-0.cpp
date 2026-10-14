#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {

                char current = board[r][c];

                // Ignore empty cells
                if (current == '.') {
                    continue;
                }

                // Calculate box index
                int boxIndex = (r / 3) * 3 + (c / 3);

                // Check duplicates
                if (rows[r].count(current) ||
                    cols[c].count(current) ||
                    boxes[boxIndex].count(current)) {

                    return false;
                }

                // Insert into sets
                rows[r].insert(current);
                cols[c].insert(current);
                boxes[boxIndex].insert(current);
            }
        }

        return true;
    }
};