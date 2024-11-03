#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;
void tc(){
    long long n,k;
    cin>>n>>k;
    if(k>n){
        cout<<"NO"<<endl;
    } else {
        if(k==n or k==1 or n%2==0 or (n%2!=0 and k%2!=0)){
            cout<<"YES"<<endl;
        } else if((k%2==0 and n%2!=0)){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
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