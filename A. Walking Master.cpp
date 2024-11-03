#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;
void tc(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d<b){
        cout<<-1<<endl;
    } else{
        int steps=0;
        steps+=(d-b);
        b=d;
        a+=steps;
        if(c>a){
            cout<<-1<<endl;
        } else {
            steps+=abs(c-a);
            cout<<steps<<endl;
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