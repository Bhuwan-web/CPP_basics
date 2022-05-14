// geometry
#include<iostream>
using namespace std;
void get_dimensions(int *l,int *b){
    cout<<"Get length: ";
    cin>>*l;
    cout<<"Get length: ";
    cin>>*b;
}
int get_area(int l,int b){
    return l*b;
}
int get_perimeter(int l, int b){
    return (2*(l+b));
}
int main(){
    int l,b;
    get_dimensions(&l,&b);
    int area,perimeter;
    area=get_area(l,b);
    perimeter=get_perimeter(l,b);
    cout<<"The perimeter of rectangle is:"<<perimeter<<endl;
    cout<<"The area of rectangle is: "<<area<<endl;

}