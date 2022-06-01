#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int x = 0;
        if(n == 1){
            cout << 1 << '\n';
            continue;
        }
        while(n != 1){
            if(n & 1) n = 3 * n + 1;
            else n /= 2;
            x++;
        }
        cout <<  x << '\n';
    }
}