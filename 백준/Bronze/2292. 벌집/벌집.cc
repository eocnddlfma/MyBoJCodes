#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a == 1) {
        cout << 1;
        return 0;
    }
    bool isover = false;
    if ((a - 1) % 6 > 0) { isover = true; }
    a = (a-1) / 6;
    if (a <= 0) {
        cout << 2;
        return 0;
    }
    int b = 0;
    int i = 0;
    for (; (b <= a) ;i++) {
        if (b == a)
            if (!isover)
                break;
        b += i;
    }
    cout << i;
}