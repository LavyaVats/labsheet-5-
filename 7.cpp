#include <iostream>
using namespace std;

int main() {
    int num;

    while (true) {
        cout << "Enter number : ";
        cin >> num;

        if (num == -1) {
            break; 
        }

        if (num < 0) {
            continue; 
        }

        cout << num << endl; 
    }

    return 0;
}
