#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    int arr[105], k = 0, x = 0;
    int msf = -1e9, ans = -1e9, flag = 0;
    while((c = getchar()) != EOF){
        if(c == '\n')break;
        if(c == ' '){
            if(flag) arr[k++] = -x;
            else arr[k++] = x;
            x = flag = 0;
        }
        else if(c == '-') flag=1;
        else x = x * 10 + c - '0';
    }
    for(int i = 0; i < k; i++){
        msf=max(msf + arr[i], arr[i]);
        ans=max(msf, ans);
    }
    if(ans > 0) cout << ans << '\n';
    else cout << 0 << '\n';
}