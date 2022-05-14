#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Assign a number: ";
    cin >> num;
    int rem = 0;
    int sqr = 0;
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        sqr += rem * rem;
    }
    cout << "The desigred number is" << sqr << endl;
}