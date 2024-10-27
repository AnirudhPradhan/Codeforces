#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;
void tc(){
    int n;
    cin>>n;
    int mini=INT_MAX;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(auto it:arr){
        mini= min(mini,abs(it));
    }
    cout<<mini<<endl;
}
int main(){
    tc();
    return 0;
}