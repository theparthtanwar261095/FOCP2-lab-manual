#include <iostream>
using namespace std;
int main(void){
    int a = 5, b = 9;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"Values after swapping is:"<<a,b;
    return 0;
    
}