#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        long long sumCal = (n*(n+1))/2;
        long long sum = 0;
        long long sqSumCal = (n*(n+1)*((2*n)+1))/6;
        long long sqSum = 0;
        for(int i = 0;i<n;i++){
            sum += arr[i];
            sqSum += arr[i]*arr[i];
        }
        
        long long subsum = sum - sumCal;
        long long sqSunsum = sqSum - sqSumCal;
        long long addEq = sqSunsum / subsum;
        long long rep = (subsum + addEq)/2;
        long long missing = addEq - rep;
        return {rep, missing};
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}