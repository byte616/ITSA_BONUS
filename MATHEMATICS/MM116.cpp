#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        int sum = 0;
        for(int i = 0;i < s.size(); i += 2){
            sum += s[i] - '0';
        }
        for(int i=1;i < s.size(); i += 2){
            sum -= s[i] - '0';
        }
        if(sum % 11) cout << "false\n";
        else cout << "true\n";
    }
}