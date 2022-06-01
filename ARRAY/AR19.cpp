#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        int cnt[100005] = {0}, a = 1, b = 1, m = n;
        for(int i = 2;i <= 100000; i++){
            while(n % i == 0){
                cnt[i]++;
                n /= i;
            }
        }
        for(int i = 2; i <= 100000; i++){
            while(cnt[i] >= 2){
                b *= i;
                cnt[i] -= 2;
            }
        }
        a = m / (b * b);
        cout << m << " = " << a << "*" << b << "^2" <<'\n';
    }
}