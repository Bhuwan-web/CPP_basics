#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Assign two numnber: ";
    cin >> num1;
    cin >> num2;
    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    float div = 1.00 * num1 / num2;
    cout << "All basic arithmetic calculatuion of given data" << endl;
    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << diff << endl;
    cout << "Multiplication: " << prod << endl;
    cout << "Divison: " << div << endl;
    return 0;
}