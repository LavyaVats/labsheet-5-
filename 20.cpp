
#include <iostream>
using namespace std;

int main() {
    int n, t, d, r = 0;

    cout << "Enter NO.: ";
    cin >> n;

    t = n;  

    
    while (t > 0) {
        d = t % 10;           
        r = r * 10 + d;      
        t /= 10;                  
    }
    if (n == r)
        cout << n << " is a Palindrome." << endl;
    else
        cout << n << " is not a Palindrome." << endl;

    return 0;
}
