#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        long long n, k;
        cin >> n >> k;
        
        // Determine the starting year for counting leaves
        long long l = max(1LL, n - k + 1);
        long long r = n;
        
        // Calculate the number of odd integers in [l, r]
        long long odds = ((r + 1) / 2) - (l / 2);
        
        // Determine parity
        if(odds % 2 == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
