
#include <iostream>
using namespace std;

int main() {
    int n, t, d, s ,f ,i;

    cout << "Strong no. b/w 1 and 500 are:" << endl;

    for (n = 1; n <= 500; n++) {
        t = n;
        s = 0;

        while (t > 0) {
            d = t % 10;

            
             f = 1;
            for ( i = 1; i <= d; i++) {
                f *= i;
            }

            s += f;
            t /= 10;
        }

        if (s == n) {
            cout << n << endl;
        }
    }

    return 0;
}
