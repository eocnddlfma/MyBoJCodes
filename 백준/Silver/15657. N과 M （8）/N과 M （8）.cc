#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<int> num;
string sequence;
bool isused[10];
int n, m;
void backtrack(int leftDigit, int lastUse) {
    if (leftDigit == 0) {
        //cout << sequence.size();
        cout << sequence << "\n";
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (lastUse > i) {
            continue;
        }
        sequence = sequence + to_string(num[i - 1]);
        isused[i - 1] = true;
        sequence.push_back(' ');
        //cout << sequence.size();
        backtrack(leftDigit - 1, i);
        isused[i - 1] = false;
        sequence.pop_back();
        while (sequence.back() != ' ') {
            sequence.pop_back();
            if (sequence.size() == 0)
                break;
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int aw;
        cin >> aw;
        num.push_back(aw);
    }
    sort(num.begin(), num.end());
    backtrack(m, 0);
    return 0;
}