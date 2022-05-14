//  print largest of 3
#include <iostream>
using namespace std;
int main()
{
    int num[3];
    int largest=0;
    for (int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    largest=num[0];
    for(int i=0;i<3;i++){
        if(num[i]>largest)
            largest=num[i];
    }
    cout<<"The largest of all is: "<<largest<<endl;
    
}