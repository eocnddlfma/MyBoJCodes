#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;

    while (a--) {
        int parsednum = 0;
        deque<int> numbers;
        bool isrotated = false;
        string instructions;
        cin >> instructions;
        int count;
        cin >> count;
        string inputofarray;
        cin >> inputofarray;

        if (count == 0) {
            bool isd = false;
            for (char c : instructions) {
                if (c == 'D')isd = true;
            }
            if (isd) {
                cout << "error";
                goto error;
            }
            else {
                cout << "[]";
                goto error;
            }
        }
        for (char c : inputofarray) {
            
            if (c == '[') {
                //donothing
            }
            else if (c == ']') {
                numbers.push_back(parsednum);
            }
            else if (c == ',') {
                numbers.push_back(parsednum);
                parsednum = 0;
            }
            else {
                parsednum = parsednum * 10 + c - '0';
            }
        }

        for (char c : instructions) {
            if (c == 'D') {
                if (numbers.size() == 0) {
                    cout << "error";
                    goto error;
                }
                if (isrotated) {
                    numbers.pop_back();
                }
                else {
                    numbers.pop_front();
                }
            }
            else if (c == 'R') {
                isrotated = !isrotated;
            }
        }
        if (isrotated) {
            deque<int> rnum;
            int waht = numbers.size();
            for (int i = 0; i < waht; i++) {
                rnum.push_back(numbers.back());
                numbers.pop_back();
            }
            numbers = rnum;
        }
        if (numbers.size() == 0) {
            cout << "[" <<  "]";
            goto error;
        }
        cout << "[" << numbers.front();
        for (int i = 1; i < numbers.size(); i++) {
            cout << "," << numbers[i];
        }

        cout << "]";
    error:
        cout << "\n";
    }


}