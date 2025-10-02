
#include <iostream>
using namespace std;

int main() {
    int n, i, s = 0;

    cout << "Enter a No: ";
    cin >> n;

    for ( i = 1; i <= n; i++) {
        s += i;   
    }

    cout<<n << " = " << s << endl;

    return 0;
}
