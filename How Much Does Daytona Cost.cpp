#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
void tc(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    map<int,int>mp;
    for(auto it:arr){
        mp[it]+=1;
    }
    if(mp.find(k)!=mp.end()){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
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