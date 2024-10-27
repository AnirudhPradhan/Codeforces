#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;
void tc(){
    vector<vector<char>> arr(10, vector<char>(10));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin >> arr[i][j];
        }
    }
    int point=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i][j]=='X'){
                if(i==0 || j==0 || i==9 || j==9){
                    point+=1;
                } else if(i==1 ||j==1 || j==8 || i==8){
                    point+=2;
                } else if(i==2 || j==2 || i==7 || j== 7){
                    point+=3;
                }  else if(i==3 || j==3 || i==6 || j==6){
                    point+=4;
                }  else if(i==4 || j==4 || i==5 || j==5){
                    point+=5;
                }
            }
        }
    }
    cout<<point<<endl;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        tc();
    }
    return 0;
}