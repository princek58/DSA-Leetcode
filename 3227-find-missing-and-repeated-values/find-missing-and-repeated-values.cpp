class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n = grid.size();

        int p = -1; 
        int q = -1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                for(int a = 0; a < n; a++) {
                    for(int b = 0; b < n; b++) {

                        if(i == a && j == b)
                            continue;

                        if(grid[i][j] == grid[a][b]) {
                            p = grid[i][j];
                        }
                    }
                }
            }
        }

        // Missing number find karna
        for(int x = 1; x <= n*n; x++) {

            bool found = false;

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {

                    if(grid[i][j] == x) {
                        found = true;
                    }
                }
            }

            if(found == false) {
                q = x;
            }
        }

        return {p, q};
    }
};