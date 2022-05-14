#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "Equation type:(ax^2+bx+c)" << endl;
    int a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    float x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a * 1.0);
    float x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a * 1.0);
    cout << "The Roots of given equation are=> x1: " << x1 << " x2: " << x2 << endl;
}