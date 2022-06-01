#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans = 0;
    cin >> n;
    vector<int> arr(n);
    for(auto &ele : arr) cin >> ele;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > 2 * arr[j]) ans++;
        }
    } 
    cout << ans << '\n';
}