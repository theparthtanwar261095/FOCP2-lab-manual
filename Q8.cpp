#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the id:";
    cin>>n;
    if(n%3==0 && n%5 == 0){
        cout<<"The tage is Buzz and fuzz";
    }
    else if(n%3==0){
        cout << "The tag is:buzz";
    }
    else if(n%5 == 0){
        cout<<"The tag is fuzz";
    }
    return 0;

}