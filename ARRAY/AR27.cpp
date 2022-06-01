#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x = 0, y;
    cin >> n;
    x ^= n;
    for(int i = 1; i < n; i++){
        cin >> y;
        x ^= y ^ i;
    }
    cout << x << '\n';
}