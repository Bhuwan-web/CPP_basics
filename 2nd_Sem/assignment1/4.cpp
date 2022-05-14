// check for multiple fo 5
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Get the number: ";
    cin >> num;
    if (num % 5 == 0)
    {
        if (num % 11 != 0)
            cout << "The given number is multiple of 5 but not of 11";
        else
            cout << "The number is multiple of both 5 and 11";
    }
    else
    {
        cout << "The given number is not a multiple of 5";
    }
    cout << endl;
    return 0;
}