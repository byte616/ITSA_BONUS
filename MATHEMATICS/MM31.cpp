#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t, x, fac[1005];
    fac[0] = 1;
    fac[1] = 1;
    cin >> t;
    for(int i = 2; i <= 18; i++) 
        fac[i] = fac[i - 1] * i;
    while(t--){
        cin >> x;
        cout << fac[x] << '\n';
    }
}