#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt1[100005], cnt2[100005], cnt3[100005], n, t, x;
    cin >> t;
    while(t--){
        int flag = 0;
        memset(cnt1, 0, sizeof(cnt1));
        memset(cnt2, 0, sizeof(cnt2));
        memset(cnt3, 0, sizeof(cnt3));
        cin >> n;
        while(n--)cin >> x, cnt1[x]++;
        cin >> n;
        while(n--)cin >> x, cnt2[x]++;
        cin >> n;
        while(n--)cin >> x, cnt3[x]++;
        for(int i = 0; i <= 65535; i++){
            if(cnt1[i] && cnt2[i] && cnt3[i]){
                cout << i << '\n';
                flag = 1;
                break;
            }
        }
        if(!flag) cout << "No answer\n";
    }
}