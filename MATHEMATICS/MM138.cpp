#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[105], s = 0, p = 0;
    cin >> n;
    int j = 1, k = n;
    for(int i = 1; i <= n; i++) cin >>arr[i];
    while(j <= n && k >= 1){
        s += arr[j], p += arr[k];
        if(s == p) cout << s << '\n';
        j++, k--;
    }
}