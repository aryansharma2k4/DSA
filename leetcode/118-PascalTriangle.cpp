#include<iostream>
#include<vector>
using namespace std;
vector<int> makeRow(int n){
    int ans = 1;
    vector<int> row;
    row.push_back(1);
    for(int i = 1;i<n;i++){
        ans = ans * (n-i);
        ans = ans / i;
        row.push_back(ans);
    }
    return row;
}
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res;
    for(int row = 1;row<=numRows;row++){
        res.push_back(makeRow(row));
    }
    return res;
}
int main(){
    int numRows = 5;
    vector<vector<int>> res = generate(numRows);
    return 0;
}