#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isProgressiveSquare(int n, int c, int d, vector<int>& a) {

  vector<vector<int>> square(n, vector<int>(n));

  square[0][0] = a[0];

  // Fill the first row
  for (int j = 1; j < n; ++j) {
    square[0][j] = square[0][j - 1] + d;
  }

  // Fill the first column
  for (int i = 1; i < n; ++i) {
    square[i][0] = square[i - 1][0] + c;
  }

  // Fill the rest of the square
  for (int i = 1; i < n; ++i) {
    for (int j = 1; j < n; ++j) {
      int expected = square[i][0] + square[0][j] - square[0][0];
      if (expected != a[i * n + j]) {
        return false;
      }
    }
  }

  return true;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, c, d;
    cin >> n >> c >> d;

    vector<int> a(n * n);
    for (int i = 0; i < n * n; ++i) {
      cin >> a[i];
    }

    if (isProgressiveSquare(n, c, d, a)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}