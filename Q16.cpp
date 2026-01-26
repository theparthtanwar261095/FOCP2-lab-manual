#include <iostream>
using namespace std;
int main(void){
    int n;
    cout << "Enter the number:";
    cin >> n;
    if(n%2==0){
        cout << "The number is not prime:";
    }
    else{
        cout << "The number is prime";
    }
}