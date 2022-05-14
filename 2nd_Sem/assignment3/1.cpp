// second largest number
#include<iostream>
using namespace std;
int main(){
    int num[3];
    for(int i=0;i<3;i++){
        cin>>num[i];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3-i-1;j++){
            if(num[j]>num[j+1]){
                int temp=num[j+1];
                num[j]=num[j+1];
                num[j+1]=num[temp];
            }
        }
    }
        cout<<"The second largest number is "<<num[1]<<endl;
}