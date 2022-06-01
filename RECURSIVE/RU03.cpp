#include <bits/stdc++.h>
using namespace std; 
int n, m, maps[405][405], ans[100005], idx; 
int vis[405][405], cnt = 0; 
int dx[] = {0, 0, 1, -1}; 
int dy[] = {1, -1, 0, 0}; 
void dfs(int x, int y){
    vis[x][y] = 1; 
    cnt++; 
    for(int i = 0; i < 4; i++){
        int _x = x + dx[i], _y = y + dy[i]; 
        if(_x > 0 && _y > 0 && _x <= n && _y <= m && !vis[_x][_y] && maps[_x][_y] == 1) 
            dfs(_x, _y); 
    }
}
int cmp(const void *a, const void *b){
    return *(int*) b - *(int*) a; 
}
int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> maps[i][j]; 
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(!vis[i][j] && maps[i][j] == 1){
                cnt = 0; 
                dfs(i, j); 
                ans[idx++] = cnt; 
            }
        }
    }
    qsort(ans, idx, sizeof(int), cmp); 
    for(int i = 0; i < idx; i++)cout << ans[i] << '\n'; 
}