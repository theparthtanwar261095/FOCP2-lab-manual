#include <iostream>
using namespace std;
int main(void){
    int n;
    cout<<"Enter the no.of days";
    cin>>n;
    if(n==365){
        cout<<"The year is not a leap year";
    }
    elseif(n==366){
        cout<<"The year is a leap year";
    }
    
}