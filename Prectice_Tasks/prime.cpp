#include<iostream>
using namespace std;
int main(){

    int i,no;
    int count = 0;

    cout<<"Enter no = ";
    cin>>no;

    for(i=2;i<no/2;i++){
        if(no%i==0){
          count++;
          break;
        }
    }

    if(count==0){
        cout<<"Prime no";
    }else{
        cout<<"Not prime no";
    }
    return 0;
}
