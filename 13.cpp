
#include <iostream>
using namespace std;

int main() {
    int N, num , p ,i;
    cout << "Enter the No: ";
    cin >> N;

    for ( num = 2; num <= N; num++) {   
         p = 0;  

        for ( i = 2; i < num; i++) {
            if (num % i == 0) {
                p = 1; 
                break;
            }
        }

        if (p == 0) {
            cout << num ;
        }
    }

    return 0;
}
