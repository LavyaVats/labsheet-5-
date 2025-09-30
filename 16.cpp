
#include <iostream>
using namespace std;

int main() {
    int n, s = 0,i;

    cout << "Enter a number: ";
    cin >> n;

    // Find divisors
    for ( i = 1; i < n; i++) {
        if (n % i == 0) {
            s += i;
        }
    }

    // Check if perfect
    if (s == n)
        cout << n << " Perfect Number." << endl;
    else
        cout << n << "NOT a Perfect Number." << endl;

    return 0;
}
