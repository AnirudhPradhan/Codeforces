#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int tc() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    int max_bits = ceil(log2(arr[n-1] + 1)); 

    for (int i = 0; i < pow(2,max_bits); i++) {
        int ans = -1;
        for (auto it : arr) {
            int xorr = i ^ it;
            if (ans == -1)
                ans = xorr;
            else
                ans = ans ^ xorr;
        }
        if (ans == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int ans = tc();
        cout << ans << endl;
    }
    return 0;
}
