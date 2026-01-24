#include <iostream>
using namespace std;
int main(void){
    float temp;
    cout << "Enter temperature:";
    cin>>temp;
    float newtemp = (temp-32)*(5.0/9.0);
    cout << "The temperature in celcius is:"<<newtemp;
}