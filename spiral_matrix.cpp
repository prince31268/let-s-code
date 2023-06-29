#include<bits/stdc++.h>
using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int columns = matrix[0].size();

    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;

        int startingCol=0;
        int endingCol=col-1;
        int startingRow=0;
        int endingRow=row-1;
        while(count<total){

            //traversing startingRow
            for(int index=startingCol; count<total && index<=endingCol;index++){
                v.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            //traversing endingCol
            for(int index=startingRow; count<total && index<=endingRow;index++){
                v.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            //traversing endingRow
            for(int index=endingCol; count<total && index>=startingCol;index--){
                v.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;


            //traversing startingCol
            for(int index=endingRow; count<total && index>=startingRow;index--){
            v.push_back(matrix[index][startingCol]);
            count++;
            }
            startingCol++;
        }
        return v;
}

int main(){
    int rows, columns;
    cin>>rows;
    cin>>columns;
vector<vector<int>> matrix(rows, vector<int>(columns));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
    spiralOrder(matrix);
    printMatrix(matrix);
}