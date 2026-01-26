#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    int n;
    cout << "Enter the id:";
    cin >> n;
    string s = to_string(n);
    string original = s;
    reverse(s.begin(),s.end());
    if(original == s){
        cout << "The given id is palindrome";
    }
    else{
        cout << "The given id is not a palindrome";
    }
}