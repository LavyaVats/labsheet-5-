
#include <iostream>
using namespace std;

int main() {
    int n, t, d,f,i , s = 0;

    cout << "Enter a number: ";
    cin >> n;

    t = n;  

    while (t > 0) {
        d = t % 10;   

        
        int f = 1;
        for ( i = 1; i <= d; i++) {
            f *= i;
        }

        s += f;         
        t /= 10;          
    }

    if (s == n)
        cout << n << " is a Strong Number." << endl;
    else
        cout << n << " is not a Strong Number." << endl;

    return 0;
}
