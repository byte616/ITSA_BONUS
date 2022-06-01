#include <bits/stdc++.h>
using namespace std;
int maps[15][15], n, m, c;
int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> maps[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> c; 
            maps[i][j] += c;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(j) cout << ' ';
            cout << maps[i][j];
        }
        cout << '\n';
    }
}