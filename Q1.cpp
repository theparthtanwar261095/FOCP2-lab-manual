#include <iostream>
using namespace std;
int main(){
    int marks1;
    int marks2;
    int marks3;
    cout<<"Enter your marks:";
    cin>>marks1;
    cout<<"Enter your marks:";
    cin>>marks2;
    cout<<"Enter your marks:";
    cin>>marks3;
    int avg = (marks1+marks2+marks3)/3;
    cout<<"The average of three marks is:"<<avg;
}