#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;
void tc(){
    int n;
    cin>>n;
    string st;
    cin>>st;
    while((st.front()=='1' and st.back()=='0') or (st.front()=='0' and st.back()=='1') and st.length()>0){
        st.erase(st.begin());
        st.pop_back();
    }
    cout<<st.length()<<endl;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        tc();
    }
    return 0;
}