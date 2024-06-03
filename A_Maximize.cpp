 #include <iostream>
using namespace std;

// Function to calculate the greatest common divisor (gcd) of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        // If x is prime, y = 1 maximizes gcd(x, y) + y
        if (x == 2)
            cout << 1 << endl;
        else if (x % 2 == 0)
            cout << x - 1 << endl;
        else
            cout << x - 2 << endl;
    }

    return 0;
}
