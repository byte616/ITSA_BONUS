#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, dp[55];
    cin >> n;
    dp[2] = dp[1] = 1;
    for(int i = 3; i <= 45; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    while(n--){
        int x;
        cin >> x;
        cout << dp[x] << '\n';
    }
}