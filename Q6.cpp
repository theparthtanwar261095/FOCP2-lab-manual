#include <iostream>
using namespace std;
int main(void){
    float a;
    float b,c;
    cout<<"Enter the no of employees:";
    cin>>a;
    cout<<"Enter the salary";
    cin>>b;
    c = b*(12.0/100.0);
    float d = c+b;
    cout<<"The bonus is"<<c;
    cout<<"The salary is"<<d;
    cout<<"The net amount to be given is:"<<d*a;
    return 0;