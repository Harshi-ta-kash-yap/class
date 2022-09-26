#include <iostream>
using namespace std;
int main()
{
    int n1, n2, ch;
    cout << "Enter Two Integer Number to construct  Arithmetic Opertion perform Calculator" << endl;
    cout << "Enter Number 1 = ";
    cin >> n1;
    cout << "Enter Number 2 = ";
    cin >> n2;
    cout << "Choose the Following operation to be perform :\n1.\t+\n2.\t-\n3.\t/\n4.\t*\n5.\t%\n\nyour choise is ";
    cin >> ch;
    switch (ch)
    {

    case 1:
        cout << "Addition " << n1 << " + " << n2 << " = " << n1 + n2 << endl;
        break;
    case 2:
        cout << "Subtraction " << n1 << " - " << n2 << " = " << n1 - n2 << endl;
        break;
    case 3:
        cout << "Division " << n1 << " / " << n2 << " = " << n1 / n2 << endl;
        break;
    case 4:
        cout << "Multiplication " << n1 << " * " << n2 << " = " << n1 * n2 << endl;
        break;
    case 5:
        cout << "Modulo (remainder=?)" << n1 << " % " << n2 << " = " << n1 % n2 << endl;
        break;
    }
    cout << "HARSHITA \n10729802021";
    return 0;
}
