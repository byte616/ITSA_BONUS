#include <bits/stdc++.h>
using namespace std;
long long int pow(int p, int n){
    long long int ret = 1;
    for(int i = 0; i < n; i++){
        ret *= 1LL * p;
    }
    return ret;
}
int main(){
    long long int n,t;
    cin >> t;
    while(t--){
        cin >> n;
        cout << pow(2,n) << '\n';
    }
}