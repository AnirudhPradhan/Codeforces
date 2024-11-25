#include <iostream>
#include <vector>
using namespace std;

int tc() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int two=0;
    for(auto it:arr){
        if(it==2){
            two+=1;
        }
    }
    if(two%2!=0) return -1;
    int req=two/2;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            count+=1;
        }
        if(count==req){
            return i+1;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << tc() << endl;
    }
    return 0;
}
