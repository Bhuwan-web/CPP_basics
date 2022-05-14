#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    if(m%n==0){
        cout<<m<<" is multiple of "<<n<<endl;
        return 0;
    }
    cout<<m<<" is not a multiple of "<<n<<endl;

}