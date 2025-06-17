#include<iostream>
using namespace std;
int main(){

    int f=1;
    int no;

    cout << "Enter no = ";
    cin>> no ;    

    for (int i = 1; i <= no; i++)
    {
        f=f*i;
    }
    cout<<"Factorial No = "<<f;

    return 0;
}