
#include <iostream>
using namespace std;

int main() {
  int i, n, s;

    for ( n = 1; n <= 1000; n++) {
         s = 0;

        
        for ( i = 1; i < n; i++) {
            if (n % i == 0) {
                s += i;
            }
        }

        
        if (s == n) {
            cout << n << " ";
        }
    }

    return 0;
}
