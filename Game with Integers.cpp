#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;
void tc(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int mini=INT_MAX;
    if(n==1) cout<<"YES"<<endl;
    else{
    for(int i=1;i<n;i++){
        mini=min(mini,arr[i]);
    }
    if(arr[0]>mini)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    }
}
int main(){
    int n;
    cin >> n;
    while(n--){
        tc();
    }
    return 0;
}