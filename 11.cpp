
#include <iostream>
using namespace std;

int main() {
    int n, f = 1, i = 1;

    cout << "Enter a number: ";
    cin >> n;

    while (i <= n) {
        f = f * i;  
        i++;              
    }

    cout << n << " = " << f << endl;

    return 0;
}
