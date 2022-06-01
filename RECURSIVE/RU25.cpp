#include <bits/stdc++.h>
using namespace std;
double pow(double a, double b){
    if(!b) return 1;
    return a * pow(a, b - 1);
}
int main(){
    float n;
    cin >> n;
    printf("%.f\n",pow(2.0, n) - 1);
}