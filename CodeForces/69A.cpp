#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    vector<vector<int>> arr(n, vector<int>(3));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sumX = 0, sumY = 0, sumZ = 0;
    for (int i = 0; i < n; i++) {
        sumX += arr[i][0];
        sumY += arr[i][1];
        sumZ += arr[i][2];
    }

    if (sumX == 0 && sumY == 0 && sumZ == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
