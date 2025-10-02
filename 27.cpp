
#include <iostream>
using namespace std;

int main() {
    int a, b, i, s, gcd = 1;

    cout << "Enter two numbers: ";
    cin >> a >> b;

     s = (a < b) ? a : b;

    for ( i = 1; i <= s; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;  
        }
    }

    cout<< gcd << endl;

    return 0;
}
