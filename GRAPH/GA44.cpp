#include <bits/stdc++.h>
using namespace std;
int n, maps[1005][1005], x;
int main(){
	while(cin >> n){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				maps[i][j] = 1e9;
			}
			maps[i][i] = 0;
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> x;
				if(x) maps[i][j] = x;
			}
		}
		for(int k = 1; k <= n; k++){
			for(int i = 1; i <= n; i++){
				for(int j = 1; j <= n; j++){
					maps[i][j] = min(maps[i][j], maps[i][k] + maps[k][j]);
				}
			}
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(j != 1) cout << " ";
				cout << maps[i][j];
			}
			cout << '\n';
		}
	}
}