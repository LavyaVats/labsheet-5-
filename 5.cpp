#include <iostream>
using namespace std;

int main() {
    int ch, a , b;
    cout << "Enter choice: 1= Addition 2= Subtraction 3= Multiplication 4= Division";
    cout << "Enter your choice (1-4): ";
    cin >> ch;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (ch) {
        case 1:
            cout << a + b << endl;
            break;
        case 2:
            cout << a - b << endl;
            break;
        case 3:
            cout << a * b<< endl;
            break;
        case 4:
            if (b != 0)
                cout << a / b << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
