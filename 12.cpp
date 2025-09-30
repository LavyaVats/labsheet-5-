
#include <iostream>
using namespace std;

int main() {
    int n ,c;
    int a = 0, b = 1, i = 1;
    cout << "Enter number : ";
    cin >> n;

    while (i <= n) {
        cout << a ;   
        c = a + b;   
        a = b;              
        b = c;
        i++;
    }

    return 0;
}

