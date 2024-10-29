#include <iostream>
#include <vector>
#include <limits.h>
#include <cmath>
#include <algorithm>
using namespace std;
void tc()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (!is_sorted(arr.begin(), arr.end()))
        cout << 0 << endl;
    else
    {
        int mini = INT_MAX;
        int i;
        int temp=0;
        for (i = 0; i < n-1; i++)
        {
            if((arr[i+1]-arr[i])<mini){
                mini=arr[i+1]-arr[i];
                temp=i;
            }
        }
        int k=0;
        k = (mini / 2) + 1;
        cout << k << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
       
            tc();
        
    }
}