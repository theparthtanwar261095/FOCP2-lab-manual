#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number";
    cin >> a;
     int n,original,digit;
    int count;
    int sum1 = 0;
    cout << "Enter the number:";
    cin>>n;
    original = n;
    while(n > 0){
        count++;
        n = n/10;

    }
    n = original;
    while(n > 0){
        digit = n%10;
        sum1 = sum1 + pow(digit,count);
        n = n/10;

    }
    if(sum1 == original){
        cout << "The number is an armstrong no";
    }
    else{
        cout << "It is not an armstrong no";
    }


    int num, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

   
    if (num <= 0) {
        cout << num << " is not a perfect number." << endl;
        return 0;
    }

    
    for (int i = 1; i < num; i++) {
        
        if (num % i == 0) {
            sum += i; 
        }
    }

    if (sum == num) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}
