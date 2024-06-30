/*
118. Pascal Triangle

Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        int n = numRows;
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i){
                    result[i].push_back(1);
                }
                else{
                    result[i].push_back(result[i-1][j-1] + result[i-1][j]);
                }
            }
        }
        return result;
    }
};