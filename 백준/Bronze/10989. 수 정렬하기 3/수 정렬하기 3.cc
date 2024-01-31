#include <iostream>
#include <algorithm>
using namespace std;

int num[10001] = { 0, };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a;
    cin >> a;

    int input;
    for (int i = 0; i < a; i++) {
        cin >> input;
        num[input]++;
    }


    for (int i = 0; i < 10001; i++) {
        for (int j = 0; j < num[i]; j++) {
            cout << i << "\n";
        }
    }
}