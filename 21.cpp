
#include <iostream>
using namespace std;

int main() {
    int n, d;
    int ev = 0, odd = 0;

    cout << "Enter NO. : ";
    cin >> n;

    while (n > 0) {
        d = n % 10;   

        if (d % 2 == 0)
            ev += d;   
        else
            odd += d;    

        n /= 10;   
    }

    cout << "Sum of even digits: " << ev << endl;
    cout << "Sum of odd digits: " << odd << endl;

    return 0;
}
