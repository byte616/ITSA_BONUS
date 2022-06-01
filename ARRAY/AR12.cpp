#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[105], cnt[105] = {0}, idx = 0;
    memset(arr, 0x3f3f3f, sizeof(arr));
    while(cin >> n && n != -999){
        bool flag = 0;
        for(int i = 0; i < idx; i++){
            if(arr[i] == n){
                cnt[i]++;
                flag = 1;
                break;
            }
        }
        if(!flag){
            arr[idx] = n;
            cnt[idx] = 1;
            idx++;
        }
    }
    for(int i = idx - 1; i > 0; i--){
        for(int j = 0; j <= i - 1; j++){
            if( arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swap(cnt[j], cnt[j + 1]);
            }
        }
    }
    for(int i = idx - 1; i >= 0; i--)
        cout << arr[i] << " " << cnt[i] << '\n';
}