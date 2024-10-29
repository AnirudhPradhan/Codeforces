#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;
void tc(){
    int x,k;
    cin>>x>>k;
    if(x%k!=0){
        cout<<1<<endl;
        cout<<x<<endl;
    } else {
        cout<<2<<endl;
        int one=x-k;
        cout<<one-1<<" "<<k+1<<endl;
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