#include <bits/stdc++.h>
using namespace std;
int n, k = 0, arr[10005], j = 0, ans[10005];
int use[100005];
void dfs2(){
    if(j == k){
        for(int i = 0; i < j; i++){
            if(i) cout << " ";
            cout << ans[i];
        }
        cout << '\n';
        return;
    }
    for(int i = 0; i < k; i++){
        if(use[i])continue;
        use[i] = 1;
        ans[j++] = arr[i];
        dfs2();
        use[i] = 0; 
        j--;
    }
}
void dfs(int level,int p){
    if(k == p){
        dfs2();
        return;
    }
    if(level == n)return;
    arr[k++] = level;
    dfs(level + 1, p);
    k--;
    dfs(level + 1, p);
}
int main(){
    cin >> n;
    n++;
    for(int i = 1;i <= n; i++){
        dfs(1, i);
    }
}