#include<iostream>
using namespace std;
int TOTAL_NUM=3;
void get_numbers(int num[]){
    for(int i=0;i<TOTAL_NUM;i++){
        cin>>num[i];
    }
}
int sum(int num[]){
    int total=0;
    for(int i=0;i<TOTAL_NUM;i++){
    total+=num[i];
    }
    return total;
}
float get_average(int num[]){
    float avg;
    float total= sum(num);
    avg=total/TOTAL_NUM;
    return avg;
}
int get_largest(int num[]){
    int largest=num[0];
    for(int i=0;i<TOTAL_NUM;i++){
        if(num[i]>largest){
            largest=num[i];
        }
    }
    return largest;
}
int get_smallest(int num[]){
    int smallest=num[0];
    for(int i=0;i<TOTAL_NUM;i++){
        if(num[i]<smallest){
            smallest=num[i];
        }
    }
    return smallest;
}

int main(){
    int num[TOTAL_NUM];
    get_numbers(num);
    int total=sum(num);
    int avg=get_average(num);
    int largest=get_largest(num);
    int smallest=get_smallest(num);

    cout<<"The sum of given numbers is: "<<total<<endl;
    cout<<"The avg of given numbers is: "<<avg<<endl;
    cout<<"The largest of given numbers is: "<<largest<<endl;
    cout<<"The smallest of given numbers is: "<<smallest<<endl;
}