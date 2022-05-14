// simple interest
#include<iostream>
using namespace std;
void get_data(int *p,int *t,float *r){
    cin>>*p>>*t>>*r;
}
float get_simple_interest(int p,int t,float r){
    return p*t*r/100;
}
float get_amount(int p,float si){
    return p+si;
}
int main(){
    int p,t;
    float r;
    get_data(&p,&t,&r);
    float simple_interest=get_simple_interest(p,t,r);
    float amount=get_amount(p,simple_interest);
    cout
    <<"The record :\n"
    <<"Simple Interest: "<<simple_interest
    <<"\nAmount: "<<amount
    <<endl;

}