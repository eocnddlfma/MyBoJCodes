#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    while (n != 0) {
        int a = n;
        int b = 0;
        while (a > 0) {
            b = b * 10 + a % 10;
            a /= 10;
        }
        a = n;
        bool issame = true;
        while (b > 0) {
            if (a % 10 != b % 10) {
                issame = false;
            }
            a /= 10;
            b /= 10;
        }
        if (issame) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
        cin >> n;
    }
    return 0;
}