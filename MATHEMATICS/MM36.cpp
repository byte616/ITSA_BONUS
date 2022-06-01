#include <bits/stdc++.h>
using namespace std;
int flag[30005];
int main(){
    int n;
    flag[1] = 1;
    for(int i = 2; i <= 30000; i++){
        if(!flag[i]){
            for(int j = i * i; j <= 30000; j += i)
                flag[j] = 1;
        }
    }
    while(cin >> n && n){
        int cnt = 0;
        for(int i = 2; i < n; i++)
            if(!flag[i]) cnt++;
        cout << cnt << '\n';
    }
}