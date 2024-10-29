#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;
void tc(){
    int n,k,x;
    cin>>n>>k>>x;
    vector<int> arr;
    if(n==1 and x==1)
    cout<<"NO"<<endl;

    else if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }cout<<endl;
    }    

    else if(x==1){
        if(n%2==0 and k>=2){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++){
                cout<<2<<" ";
            }cout<<endl;
        } else {
            if(k>=3){
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=0;i<n/2-1;i++){
                    cout<<2<<" ";
                }
                cout<<3<<endl;
            } else {
                cout<<"NO"<<endl;
            }
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