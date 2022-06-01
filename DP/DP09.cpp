#include <bits/stdc++.h>
using namespace std;
int yes[510], no[510];
int main(){
	int n;
	while(cin >> n && n){
		for(int i = 1;i <= n; i++) cin >> yes[i];
		for(int i = 2; i <= n; i++){
			no[i] = max(no[i - 1], yes[i - 1]);
			yes[i] += no[i - 1];
		}
		cout << max(yes[n], no[n]) << '\n';
	}
}

