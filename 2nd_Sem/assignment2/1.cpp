// sum of digits
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Assign a number: ";
    cin >> num;
    int rem = 0;
    int sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        sum += rem;
    }
    cout << "The sum of each digits of given number is: " << sum << endl;
}