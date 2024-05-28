#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int res = 0;
    int n = s1.length();

    for (int i = 0; i < n; ++i) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        if (c1 < c2) {
            res = -1;
            break;
        } else if (c1 > c2) {
            res = 1;
            break;
        }
    }

    cout << res << endl;
    return 0;
}
