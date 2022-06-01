#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, mi = 1e9, ma = -1e9;
    for(int i = 1;i <= 10; i++){
        cin >> n;
        if(n > ma) ma = n;
        if(n < mi) mi = n;
    }
    cout << "Largest number = " << ma << '\n';
    cout << "Smallest number = " << mi << '\n';
}