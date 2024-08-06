#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int timeInt = 0, timeShower = 0, m = 0;
        cin >> timeInt >> timeShower >> m;
        vector<vector<int>> routine(timeInt);
        for (int j = 0; j < timeInt; j++) {
            int a, b;
            cin >> a >> b;
            routine[j] = {a, b};
        }

        bool flag = false;

        if (routine[0][0] >= timeShower) {
            cout << "YES" << endl;
            continue;
        }

        for (int j = 0; j < routine.size() - 1; j++) {
            if (routine[j+1][0] - routine[j][1] >= timeShower) {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }

        if (!flag && (m - routine[routine.size() - 1][1] >= timeShower)) {
            cout << "YES" << endl;
            continue;
        }

        if (!flag) {
            cout << "NO" << endl;
        }
    }
    return 0;
}
