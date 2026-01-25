#include <iostream>
using namespace std;
int main(void){
    int n;
    int p;
    cout << "Enter the no of items ordered:";
    cin >> n;
    cout << "Enter the cost per item:";
    cin >> p;
    int total_cost = n*p;
    float disc = (total_cost)*(10.0/100.0);
    int final_amt = total_cost - disc;
    if(n>=1000){
        cout << "The final amount is:"<<final_amt;
    }
    else{
        cout << "The final amount is:"<<total_cost;
    }
}