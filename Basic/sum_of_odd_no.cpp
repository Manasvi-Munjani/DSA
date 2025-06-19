#include<iostream>
using namespace std;
int main(){

    int oddsum=0,n;
    cout<<"Enter no = ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            oddsum+=i;         
        }
    }
    cout<<"oddsum = "<<oddsum; 

    return 0;
}