#include<iostream>
using namespace std;
int sum_digits(int num){
    int sum=0;
    while(num>0){
        int rem=num%10;
        num/=10;
        sum+=rem;
    }
    return sum;
}
int main(){
    int num;
    cin>>num;
    int sum=sum_digits(num);
    cout<<"The sum of  number of digits in program is "<<sum<<endl;
}