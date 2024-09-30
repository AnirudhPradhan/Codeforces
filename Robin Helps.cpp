#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
using namespace std;
void tc(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    int stock=0;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int count=0,maxi=INT_MIN;
    for(auto it:arr){
        if(it>=k)
        stock+=it;
        if(it==0){
            if(stock>0){
                count+=1;
                stock-=1;
            }
        }
    }
    cout<<count<<endl;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        tc();
    }
    return 0;
}