#include <iostream>
using namespace std;
int main()
{
    int seconds;
    int hours, minutes, sec;
    cin >> seconds;
    hours = seconds / 3600;
    seconds -= hours * 3600;
    minutes = seconds / 60;
    seconds -= minutes * 60;
    sec = seconds;
    cout << "The time is " << endl;
    cout << hours << " Hours " << minutes << " Minutes " << sec << " Seconds" << endl;
}