#include <bits/stdc++.h>
using namespace std;
int cmp(const void* a,const void* b){
    return *(int*) a - *(int*) b;
}
int main(){
    int t, n, arr[200005];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < 2 * n; i++) cin >> arr[i];
        qsort(arr, n * 2, sizeof(arr[0]), cmp);
        cout << arr[n-1] << '\n';
    }
}