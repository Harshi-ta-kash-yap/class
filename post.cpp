#include <iostream>
using namespace std;

int main()
{
    int a, b, ch;
    int c = 0;
    cout << "\n\nEnter a Value in variable to show uses of pre and post increment operators \n  a= ";
    cin >> a;

    do
    {

        cout << "\nEnter folllowing num :\n1.\tPost increment\n2.\tPre increment\n\tyour choise = ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            b = ++a;
            cout << "\nAfter pre-increment \n\ta= " << a << " \n\t b = " << b;
            break;
        case 2:
            b = a++;
            cout << "\nAfter post-increment \n\ta= " << a << " \n\tb = " << b;
            break;
        }

        cout << "\nyou want to stop press -1 = ";
        cin >> c;

    } while (c != -1);
    cout << "\nHARSHITA \n10729802021" << endl;
    return 0;
}