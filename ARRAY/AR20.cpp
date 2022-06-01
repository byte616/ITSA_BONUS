#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin >> s){
        bool flag = 0;
        for(int i = 0;i <= s.size() / 2; i++){
            if(s[i] != s[s.size() - 1 - i]){
                cout << "no" << '\n';
                flag = 1;
                break;
            }
        }
        if(!flag) cout << "yes" << '\n';
    }
}