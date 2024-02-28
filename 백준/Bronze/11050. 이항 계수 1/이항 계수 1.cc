#include <iostream>
#include <algorithm>
using namespace std;

int calc[11] = {0,};
int factorial(int n){
    if(n<=1) return 1;
    if(calc[n]!=0){
        return calc[n];
    }
    calc[n] = n * factorial(n-1);
    return calc[n];
}

int main() {
    int n, k;
    cin >> n >> k;
    int a, b, c;
    a = factorial(n);
    b = factorial(k);
    c = factorial(n-k);
    cout << a/(b*c); 
    return 0;
}