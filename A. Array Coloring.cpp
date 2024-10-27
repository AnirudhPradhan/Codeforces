#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;
void tc(){
    int n;
    cin>>n;
    int sum=0;
    bool even=false;
    bool odd=false;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]%2==0){
            even=true;
        }
        if(arr[i]%2!=0){
            odd=true;
        }
    }
    if(sum%2!=0){
        cout<<"NO"<<endl;
    }else {
        if(even or odd){
            
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
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