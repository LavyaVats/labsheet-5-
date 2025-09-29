
#include <iostream>
using namespace std;

int main() {
    int n , m ;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; ; i++) {
         m = n * i;
        if (m > 50) {
            break; 
        }
        cout << n << " x " << i << " = " << m << endl;
    }

    return 0;
}
