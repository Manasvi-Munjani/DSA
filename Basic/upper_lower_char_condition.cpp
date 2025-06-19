#include<iostream>
using namespace std;
int main(){
    char ch;

    cout<<"Please Enter charecter =";
    cin>>ch;

    // if(ch >= 'a'&& ch <='z'){
    if(ch >= 65 && ch <=90){
        cout<<"Carecter is Lower"; 
    }else{  
        cout<<"Upper Charecter";
    }
    return 0;
}