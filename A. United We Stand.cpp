#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
#include <unordered_map>
using namespace std;

void tc() {
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> b;
    vector<int> c;
    int maxi=INT_MIN;
    for(auto it:arr){
        maxi=max(maxi,it);
    }
    for(auto it:arr){
        if(it==maxi) c.push_back(it);
        else b.push_back(it);
    }
    if(c.size()==size){
        cout<<-1<<endl;
    } else {
        cout<<b.size()<<" "<<c.size()<<endl;
        for(auto it:b){
            cout<<it<<" ";
        }cout<<endl;
        for(auto it:c){
            cout<<it<<" ";
        }cout<<endl;
    }
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        tc();
    }
    return 0;
}
