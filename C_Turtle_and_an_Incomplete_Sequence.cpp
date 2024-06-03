#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> results;

    while (t--) {
        int n;
        cin >> n;
        
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                results.push_back(1);
            } else {
                results.push_back(2);
            }
        }
        results.push_back(-1);  // A marker to differentiate between test cases
    }

    bool firstCase = true;
    for (int x : results) {
        if (x == -1) {
            if (!firstCase) {
                cout << endl;
            }
            firstCase = false;
        } else {
            cout << x << " ";
        }
    }

    return 0;
}
