#include <iostream>
using namespace std;

int main(void){
    char op;
    int num1, num2;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "Enter the operation you want to perform (+, -, *, /): ";
    cin >> op;

    if(op == '+'){
        int res = num1 + num2;
        cout << "The result is: " << res;
    }
    else if(op == '-'){
        int res = num1 - num2;
        cout << "The result is: " << res;
    }
    else if(op == '*'){
        int res = num1 * num2;
        cout << "The result is: " << res;
    }
    else if(op == '/'){
        if(num2 != 0){
            int res = num1 / num2;
            cout << "The result is: " << res;
        }
        else{
            cout << "Error: Division by zero is not allowed";
        }
    }
    else{
        cout << "Invalid operator";
    }

    return 0;
}
