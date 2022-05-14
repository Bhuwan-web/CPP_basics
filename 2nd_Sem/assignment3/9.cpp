#include<iostream>
using namespace std;
int reverse_num(int num){
    int rev_num=0;
    while(num>0){
        int rem=num%10;
        rev_num=rev_num*10+rem;
        num/=10;
    }
    return rev_num;
}
int main(){
    int num,rev_num;
    cin>>num;
    rev_num=reverse_num(num);
    cout<<"The reversed number is "<<rev_num<<endl;

}