#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    int a,b,c;
    cout << "Enter the coefficients of a,:";
    cin >> a;
    cout << "Enter the coefficient of b:";
    cin >> b;
    cout << "Enter the coefficient of c:";
    cin >> c;
    int D = (b*b)-(4*a*c);

    int d = pow(D,1/2);
    if(D>0){
        int root1 = (-b + d)/2*a;
        int root2 = (-b - d)/2*a;
        cout << "The roots are"<<root1,root2;

    }
    else if(D==0){
        int root = -b/2*a;
        cout << "The roots are:"<<root;
    }
    else{
        cout << "The roots are imaginary:";
    }
}