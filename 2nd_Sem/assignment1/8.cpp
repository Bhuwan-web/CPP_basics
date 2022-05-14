#include <iostream>
using namespace std;
int main()
{
    int subs[5];
    int total = 0;
    float FULL_MARKS = 500.00;
    float percentage;
    for (int i = 0; i < 5; i++)
    {
        cin >> subs[i];
        total += subs[i];
    }
    percentage = (total / FULL_MARKS) * 100;
    cout << "Total marks obtained: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
}