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
    int count=0;
    int temp=INT_MIN;
    for(auto it:arr){
        if(it==0){
            count+=1;
        } else {
            temp=max(temp,count);
            count=0;
        }
    }
    temp=max(temp,count);
    cout<<temp<<endl;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        tc();
    }
    return 0;
}