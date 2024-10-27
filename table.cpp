#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    float n;
    cin >> n;
    for(int i=1;i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<i*n<<endl;
    }
}