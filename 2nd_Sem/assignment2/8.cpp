#include<iostream>
using namespace std;
void get_temp_in_cel(float *temp_in_cel){
    cin>>*temp_in_cel;
}
float temp_c_to_f(float temp_in_cel){
    float temp=0;
    temp=9*temp_in_cel/5+32;
    return  temp;
}
int main(){
    float temp_in_cel;
    get_temp_in_cel(&temp_in_cel);
    float temp_in_fer=temp_c_to_f(temp_in_cel);
    cout<<"The tempreature in fahrenhite is: "<<temp_in_fer<<".F"<<endl;
}