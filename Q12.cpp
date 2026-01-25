#include <iostream>
using namespace std;
int main(void){
    int side1 , side2 , side3;
    cout << "Enter side1:";
    cin >> side1;
    cout << "Enter side2:";
    cin >> side2;
    cout << "Enter side3:";
    cin >> side3;
    if(side1 == side2 && side2 == side3){
        cout << "THe triangle is an equilateral triangle";
    }
    else if(side1 == side2 && side2!=side3){
        cout << "The triangle is isoceles triangle";
    }
    else if(side1 == side3 && side3!=side2){
        cout<<"THe triangle is an isoceles triangle";
    }
    else{
        cout << "The triangle is a scalene triangle";
    }
}