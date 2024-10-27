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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(arr[i-1]>arr[i] and i!=0){
            ans.push_back(arr[i]);
        }
        ans.push_back(arr[i]);
    }
    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }cout<<endl;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        tc();
    }
    return 0;
}