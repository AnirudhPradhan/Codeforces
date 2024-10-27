#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;
void tc(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        cout<<"First"<<endl;
    } else if(a<b){
        cout<<"Second"<<endl;
    } else{
        if(c%2==0){
            cout<<"Second"<<endl;
        } else {
            cout<<"First"<<endl;
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