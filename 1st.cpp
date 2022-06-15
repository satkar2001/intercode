#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
int n = matrix.size();
    int m = matrix[0].size();

    bool x = 0, y = 0;
    
    // Setting firstColZero to true if any element in first column is zero.
    for(int i = 0; i < n; i++) {
        if(matrix[i][0] == 0) {
            x = 1;
            break;
        }
    }
    
    // Setting firstRowZero to true if any element in first row is zero.
    for(int j = 0; j < m; j++) {
        if(matrix[0][j] == 0) {
            y = 1;
            break;
        }
    }
    
    // Setting values for each row and column to be zero or not.
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }
    
    // If any element of first row is zero then that complete column should be zero and vice-versa.
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Setting first row to zero if firstRowZero is true.
    if(x==1) {
        for(int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }
    
    // Setting first column to zero if firstColZero is true.
    if(y==1) {
        for(int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }
    
}
