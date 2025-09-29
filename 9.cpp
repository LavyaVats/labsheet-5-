
#include <iostream>
using namespace std;

int main() {
    int ch;

    cout << "Enter a number (1, 2,3): ";
    cin >> ch;

    switch (ch) {
        case 1:
            cout << "You chose 1" << endl;
            break;
        case 2:
            cout << "You chose 2" << endl;
            break;
        case 3:
            cout << "You chose 3" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
