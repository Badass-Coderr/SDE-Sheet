/*
73. Set Matrix Zero

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool col[m], rows[n];

        for(int i = 0; i < n; i++){
            rows[i] = false;
        }
        for(int i = 0; i < m; i++){
            col[i] = false;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    rows[i] = true;
                    col[j] = true;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(rows[i])
                    matrix[i][j] = 0;
                else if(col[j])
                    matrix[i][j] = 0;
            }
        }
    }
};