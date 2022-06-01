#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a,const void *b){
    return *(int*) a - *(int*) b;
}
int main(){
    int x = 0, arr[10005];
    while(cin >> arr[++x]);
    qsort(arr + 1, x - 1, sizeof(arr[0]), cmp);
    x--;
    cout << "Median=";
    if(x & 1) printf("%d\n", arr[x / 2 + 1]);
    else printf("%.1f\n", (double)(arr[x / 2] + arr[x / 2 + 1]) / 2);
}