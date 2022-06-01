#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void* b){
    return *(int*) b - *(int*) a;
}
int main(){
    int n, arr[105];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    qsort(arr, n, sizeof(arr[0]), cmp);
    for(int i = 0; i < n; i++) cout << i+1 << " " << arr[i] << '\n';
}