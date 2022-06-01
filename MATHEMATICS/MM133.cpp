#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double sum = 0;
    cin >> n;
    for(int i = n; i > 0; i -= 2){
        sum += (double)1 / i;
    }
    printf("%.11f\n", sum);
}