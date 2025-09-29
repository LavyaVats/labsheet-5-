#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool prime = true;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            prime = false;
            break; 
        }
    }

    if (prime && n > 1)
        cout << n << " is Prime";
    else
        cout << n << " is NOT Prime";

    return 0;
}
