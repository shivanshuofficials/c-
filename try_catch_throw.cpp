#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int no;
    int value;
    int divide;

    cout << "Enter the value: ";
    cin >> value;
    cout << "Enter the divisor: ";
    cin >> no;

    try {
        if (no == 0) {
            throw "Division by zero is not allowed";  
        }
        divide = value / no;  
        cout << "The answer is: " << divide;
    }
    catch (const char* msg ) {
      
        cout << "Error: " << msg << endl;
    }
    return 0;
}
