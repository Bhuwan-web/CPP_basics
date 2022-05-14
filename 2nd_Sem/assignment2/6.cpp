// area of circle
#include<iostream>
using namespace std;
float PI=3.14;
void get_radius(int *r){
    cin>>*r;
}
float get_circumference(int r){
    return 2*PI*r;
}
float get_area(int r){
    return PI*r*r;
}
int main(){
    int r;
    float circumference;
    float area;
    cout<<"Assign Radius: ";
    get_radius(&r);
    circumference=get_circumference(r);
    area=get_area(r);
    cout
    <<"The geometry of circle:\n"
    <<"Area: " <<area
    <<" \nCircumference: " <<circumference
    <<endl;
}