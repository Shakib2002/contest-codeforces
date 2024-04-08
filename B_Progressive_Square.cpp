#include <iostream>
#include <vector>

using namespace std;

bool is_progressive_square_possible(int n, int c, int d, vector<int>& a) {
    vector<vector<int>> square(n, vector<int>(n));
    square[0][0] = a[0];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 && j == 0) continue;
            if (i == 0) square[i][j] = square[i][j - 1] + d;
            else if (j == 0) square[i][j] = square[i - 1][j] + c;
            else if (square[i][j - 1] + d != square[i - 1][j] + c) return false;
        }
    }
    int index = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (square[i][j] != a[index++]) return false;
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
        if (is_progressive_square_possible(n, c, d, a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}