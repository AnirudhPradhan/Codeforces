#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;
void tc(){
    int n,k;
    cin>>n>>k;
    string x;
    string s;
    cin>>x;
    cin>>s;
    while(x.length()<2*s.length()){
        x+=x;
    }
    int l=0,h=0;
    for(int i=0;i<x.length();i++){
        if(s[l]==x[i]){
            l++;
            if(l==s.length()) break;
        } else {
            l=1;
        }
    }
    if(l==s.length()){
        
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