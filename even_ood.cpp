#include <iostream>
using namespace std;
int main()
{
    int num, ch;
    cout << "Enter Number to check whether even or odd =  ";
    cin >> num;
    ch = num % 2 == 0;
    if (ch)
        cout << "Number is Even " << num << endl;

    else
        cout << "Number is Odd " << num << endl;
    cout << "\nHARSHITA \n10729802021" << endl;
    return 0;
}