#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[105], flag = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) 
        if(arr[i] == i){
            cout << "x[" << i << "] = " << arr[i] << '\n';
            flag = 1;
        }
    if(!flag) cout << "NOT FOUND!\n";
}