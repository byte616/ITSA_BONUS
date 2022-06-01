#include <bits/stdc++.h>
using namespace std;
int dp[100005];
int cal(int n){
    if(dp[n] != 0) return dp[n];
    if(n == 1) return 0;
    if(!(n & 1)) return dp[n] = 1 + cal(n / 2);
    int x = cal(n + 1), y = cal(n - 1);
    if(x > y) return dp[n] = y + 1;
    return dp[n] = x + 1;
}
int main(){
    int n,x;
    cin >> n;
    cout << cal(n) << '\n';
    while(n--){
        cin >> x;
        cout << cal(x) << '\n';
    }
}