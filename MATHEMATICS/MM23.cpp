#include <bits/stdc++.h>
using namespace std;
int s[30005];
int main(){
	int t;
	cin >> t;
	while(t--){
		int r, sum = 0;
		cin >> r;
		for(int i = 0; i < r; i++) cin >> s[i];
		sort(s, s + r);
		for(int i = 0; i < r; i++)
			sum += abs(s[i] - s[r / 2]);
		cout << sum << '\n';
	}
}