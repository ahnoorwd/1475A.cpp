
#include <iostream>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        // If n is odd, it has an odd divisor greater than 1
        if (n % 2 != 0) {
            cout << "YES" << endl;
        }
        // If n is even, check if it's a power of 2
        else {
            // Keep dividing n by 2 to see if it becomes 1 (power of 2 check)
            while (n % 2 == 0) {
                n /= 2;
            }
            // If after dividing by 2 it becomes 1, it means it's a power of 2
            if (n == 1) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
