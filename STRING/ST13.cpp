#include <bits/stdc++.h>
using namespace std;
int main(){
    string target, s;
    cin >> target;
    int t, cnt1[30] = {0};
    for(int i = 0; i < target.size(); i++){
        cnt1[tolower(target[i]) - 'a']++;
    }
    cin >> t;
    while(t--){
        int cnt2[30] = {0}, flag = 0;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            cnt2[tolower(s[i])-'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(cnt1[i] != cnt2[i]){
                flag = 1;
                break;
            }
        }
        if(!flag) cout << s << '\n';
    }
}
