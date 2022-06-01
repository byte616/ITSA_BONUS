#include <bits/stdc++.h>
using namespace std;
int dp[105];
int f(int x){
    if(dp[x]) return dp[x];
    if(x == 0)return 1;
    if(x == 1 || x == 2) return 2;
    return dp[x] = f(x - 1) / 4 + f(x - 2) / 2 + f(x - 3);
}
int main(){
    int n;
    cin >> n;
    cout << f(n) << '\n';
}