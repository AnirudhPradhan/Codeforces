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
    int neg=0;
    int pos=0;
    for(auto it:arr){
        if(it<0) neg+=1;
        else pos+=1;
    }
    int count=0;
    while((pos<neg or neg%2!=0) and neg>0){
        neg-=1;
        pos+=1;
        count+=1;
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