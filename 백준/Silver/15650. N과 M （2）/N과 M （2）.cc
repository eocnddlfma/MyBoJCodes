#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string sequence;
//int isused[10];
int n, m;
void backtrack(int leftDigit, int usedNum) {
    if (leftDigit == 0) {
        //cout << sequence.size();
        cout << sequence << "\n";
        return;
    }
    for (int i = usedNum + 1; i <= n; i++) {
        if (n - i + 1 < leftDigit) {
            return;
        }
        sequence.push_back(i+'0');
        sequence.push_back(' ');
        //cout << sequence.size();
        backtrack(leftDigit - 1, i);
        sequence.pop_back();
        sequence.pop_back();
    }
}

int main() {
    cin >> n >> m;

    backtrack(m, 0);
    return 0;
}