#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Year: ";
    cin >> year;
    // condn for leap year: divisible by 4 and not divisible by 100 unless it's also divisible by 400
    if ((year % 4 == 0) & !((year % 400 == 0) ^ (year % 100 == 0)))
    {
        cout << "The entered year is a leap year";
    }
    else
    {
        cout << "The entered year is not a leap year";
    }
    cout << endl;
}
// test years:
// 1996
// 1900
// 2000