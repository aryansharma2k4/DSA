#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i = 0;i<n;i++){
        for(int j= 0 ;j<n;j++){
            if(j>i){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
    for(int i =0;i<n;i++){
        for(int j = 0;j<n/2;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n-j-1];
            matrix[i][n-j-1] = temp; 
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    return 0;
}