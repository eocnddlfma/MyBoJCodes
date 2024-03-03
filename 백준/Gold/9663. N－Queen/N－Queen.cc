#include <iostream>
#include <algorithm>
using namespace std;

bool isused1[40];
bool isused2[40];
bool isused3[40];

long long int cunt = 0;
int n;

void nqueen(int cur) {
    if (cur == n) {
        cunt++;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (isused1[i] || isused2[i+cur] || isused3[cur - i + n - 1])
            continue;
        isused1[i] = true;
        isused2[i + cur] = true;
        isused3[cur - i + n - 1] = true;

        nqueen(cur + 1);

        isused1[i] = false;
        isused2[i + cur] = false;
        isused3[cur - i + n - 1] = false;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    nqueen(0);
    cout << cunt;
}
