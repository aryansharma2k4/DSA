#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int a1, a2, a3;
        cin>>a1>>a2>>a3;
        int cck = a1 + a2 + a3;
        if (cck >= 2) {
            res++;
        }
    }
    cout << res;
    return 0;
}