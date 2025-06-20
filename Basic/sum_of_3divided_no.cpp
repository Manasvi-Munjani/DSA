#include<iostream>
using namespace std;
int main(){

    int no,i;
int sum=0;

    cout<<"Enter no = ";
    cin>>no;

    for(i=1;i<=no;i++){
        if(i%3==0){
        //  sum += i;
        sum = sum +i;
        }
    }
    cout<<"Sum of Divided by 3 No = "<<sum;
    return 0; 
}