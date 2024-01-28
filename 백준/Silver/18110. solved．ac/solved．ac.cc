#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
    vector<int> difficultys;
    int num;
    cin >> num;
    if (num == 0) {
        cout << 0;
        return 0;
    }
    int unusedanswer = round(num * 15 / (float)100);

    for (int i = 0; i < num; i++) {
        int a;
        cin >> a;
        difficultys.push_back(a);
    }
    sort(difficultys.begin(), difficultys.end());

    long long int sum = 0;

    for (int i = 1; i <= num; i++) {
        if (i <= unusedanswer || i > num - unusedanswer) {

        }
        else {
            sum += difficultys[i-1];
        }
    }
    sum = round(sum / (float)(num - unusedanswer * 2));
    cout << sum;
    return 0;
}