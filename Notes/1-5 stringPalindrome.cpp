#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "A man, a plan, a canal: Panama";
    int n = s.length();
    char res[n];
    int k = 0;
    for(int i = 0; i < n; i++) {
        if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) {
            res[k] = s[i];
            k++;
        }
    }
    for(int i = 0; i < k; i++) {
        if(s[i]>=65 && s[i]<=90){
            cout<<res[i] + 32;
        }
        else{
            cout<<res[i];
        }
    }
    return 0;
}
