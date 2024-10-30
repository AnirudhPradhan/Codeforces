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
    int maxi=INT_MIN;
    for(auto it:arr){
        maxi=max(maxi,it);
    }
    maxi+=1;
    for(auto it:arr){
        cout<<maxi-it<<" ";
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