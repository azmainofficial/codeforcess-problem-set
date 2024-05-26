#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;
    vector<int> v;

    if (n == 2 && s == "00") {
        cout << "YES" << endl;
        return;
    }

    if (n == 2) {
        cout << "NO" << endl;
        return;
    }

    if (n == 1 && s == "0") {
        cout << "YES" << endl;
        return;
    }

    if (n == 1) {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            count++;
            v.push_back(i);
        }
    }

    if (count == 2 && (v[1] - v[0]) == 1) {
        cout << "NO" << endl;
        return;
    }

    if (count % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}
