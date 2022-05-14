#include<iostream>
using namespace std;
int digit_length(int num){
    int count=0;
    while(num>0){
        num/=10;
        count+=1;
    }
    return count;
}
int main(){
    int num;
    cin>>num;
    int count=digit_length(num);
    cout<<"The number of digits in program is "<<count<<endl;
}