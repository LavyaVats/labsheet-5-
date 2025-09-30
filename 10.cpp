
#include <iostream>
using namespace std;

int main() {
    int n, count=0;
  
    while (true) {
        cout << "Enter a number : ";
        cin >> n;

        if (n == 0) {
            break; 
        }

        if (n > 0) {
            count++; 
        }
    }

   << count << endl;

    return 0;
}
