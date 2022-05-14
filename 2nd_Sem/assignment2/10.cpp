#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum_num=0;
    int dub_num=num;
    while(dub_num>0){
        int rem=dub_num%10;
        sum_num+=rem*rem*rem;
        dub_num=dub_num/10;
    }
    if(num==sum_num){
        cout<<"The given number is Armstrong Number"<<endl;
        return 0;
    }
    cout<<"The given number is not armstrong number"<<endl;
}