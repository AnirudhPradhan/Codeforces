#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;
void tc(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> final(arr);
    sort(final.begin(),final.end());
    if(k>1 or final==arr) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int main(){
    int n;
    cin >> n;
    while(n--){
        tc();
    }
    return 0;
}