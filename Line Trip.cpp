#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
using namespace std;
void tc(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    arr.push_back(x);
    int mini=INT_MIN;
    int temp=0;
    for(int i=0;i<arr.size();i++){
        
        if(arr[i]==x){
            mini=max(mini,2*(arr[i]-temp));
        } else {
            mini=max(mini,arr[i]-temp);
        }
        temp=arr[i];
    }
    cout<<mini<<endl;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        tc();
    }
    return 0;
}