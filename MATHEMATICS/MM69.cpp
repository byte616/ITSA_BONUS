#include <bits/stdc++.h>
using namespace std;
int main(){
    double h, w;
    cin >> h >> w;
    double ans = w / h / h * 100 * 100;
    printf("%.1f ", ans);
    if(ans < 18.5) cout << "underweight" << '\n';
    else if(ans < 24) cout << "normal" << '\n';
    else if(ans < 27) cout << "overweight" << '\n';
    else if(ans < 30) cout << "mild obesity" << '\n';
    else if(ans < 35) cout << "moderate obesity" << '\n';
    else cout << "severe obesity" << '\n';
}