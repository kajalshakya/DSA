#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    //Allocate correct size
    vector<vector<int>> transposed(col, vector<int>(row));

    //Fill transposed matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            transposed[j][i] = matrix[i][j];
        }
    }

    //Print transposed matrix
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {4, 7, 8},
        {8, 8, 7},
        {2, 3, 4}
    };

    transpose(matrix);

    return 0;
}
