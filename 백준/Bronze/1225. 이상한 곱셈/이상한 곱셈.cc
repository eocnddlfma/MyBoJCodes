#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int> v1;
    vector<int> v2;
    string s;
    cin >> s;
    for (char c : s)
    {
        v1.push_back(c - '0');
    }
    cin >> s;
    for (char c : s){
        v2.push_back(c - '0');
    }

    long long int sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v2.size(); j++)
        {
            sum += v1[i] * v2[j];
        }
    }
    cout << sum;
}