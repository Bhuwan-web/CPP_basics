#include<iostream>
using namespace std;
int NUM=10;
double square_upto(int n){
    double square;
    for(int i=1;i<=n;i++){
        square+=i*i;
    }
    return square;
}
double cube_upto(int n){
    double cube;
    for(int i=1;i<=n;i++){
        cube+=i*i*i;
    }
    return cube;
}
int main(){
    int n;
    // cin>>n;
    n=NUM;
    double sum_of_sqr=square_upto(n);
    double sum_of_cube=cube_upto(n);
    cout
    <<"The sum of square and cube of numbers of 10 natural number are: "
    <<sum_of_sqr
    <<" "
    <<sum_of_cube
    <<" respectively"
    <<endl;
}