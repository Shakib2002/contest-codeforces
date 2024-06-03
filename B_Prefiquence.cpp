#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        string a, b;
        cin >> a >> b;
        
        int j = 0, k = 0;
        for (int i = 0; i < m && j < n; ++i) {
            if (b[i] == a[j]) {
                ++j;
                ++k;
            }
        }
        
        cout << k << endl;
    }
    
    return 0;
}
