#include <iostream>
using namespace std;
int main(void){
    int itemno;
    int quantity;
    int unit_price;
    cout<<"Enter item no:";
    cin>>itemno;
    cout << "Enter quantity";
    cin>>quantity;
    cout<<"Enter unit price:";
    cin>>unit_price;
    int amount = quantity*unit_price;
    float newamount = amount - amount*(20.0/100.0);
    cout << "Your bill after discount is:"<<newamount;
}