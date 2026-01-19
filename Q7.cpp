#include <iostream>
using namespace std;
int main(){
    int a = 20 , b = 3;
    a = a^b;
    b = b^a;
    a = a^b;
    cout << "First number is "<< a << endl;
    cout << "Second number is "<< b;
    return 0;
}