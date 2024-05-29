#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int i = 1;
    while (true) {
        if (m < i) {
            cout << m;
            break;
        }
        m -= i;
        i++;
        if (i > n) {
            i = 1;
        }
    }
    
    return 0;
}
