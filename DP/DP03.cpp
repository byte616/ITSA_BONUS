#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[100005], b[100005], dp[100005];
int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> b[i] >> a[i];
    cin >> m;	
    for(int i = 0; i < n; i++){
        for(int k = m;k >= b[i]; k--){
            if(dp[k - b[i]] + a[i] > dp[k]){
                dp[k] = dp[k - b[i]] + a[i];
            }
        }
    }
    cout << dp[m] << '\n';
}