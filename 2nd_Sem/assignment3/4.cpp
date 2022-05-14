#include<iostream>
using namespace std;
int main(){
    int num=10;
    float sum=0;
    for(int i=2;i<=10;i++){
        cout<<i-1<<"/"<<i<<"+";
        sum+=1-1/i;
    }
    cout<<"......(n-1)/n"<<endl;
    cout<<"Sum of series is: "<<sum<<endl;
}