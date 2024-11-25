#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>  // For std::gcd

using namespace std;

// Function to calculate GCD using the Euclidean algorithm
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Main function to check if the array can be rearranged to become beautiful
string tc() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Sort the array to check prefixes in increasing order
    sort(arr.begin(), arr.end());
    
    // Check all prefixes (from length 2 to n)
    for (int i = 1; i < n; i++) {
        int prefix_gcd = arr[0];
        
        // Calculate GCD of the current prefix
        for (int j = 1; j <= i; j++) {
            prefix_gcd = gcd(prefix_gcd, arr[j]);
        }
        
        // If the GCD of the prefix is greater than the length of the prefix, return "No"
        if (prefix_gcd > (i + 1)) {
            return "No";
        }
    }
    
    return "Yes";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << tc() << endl;
    }
    return 0;
}
