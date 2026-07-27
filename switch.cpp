#include <iostream>
using namespace std;

int main() {
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1.Add\n2.Subtract\n3.Multiply\n4.Divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Addition = " << a + b;
            break;
        case 2:
            cout << "Subtraction = " << a - b;
            break;
        case 3:
            cout << "Multiplication = " << a * b;
            break;
        case 4:
            if(b != 0)
                cout << "Division = " << (float)a / b;
            else
                cout << "Division by zero not possible";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
