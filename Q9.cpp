#include <iostream>
using namespace std;

int main(){
    char letter;
    cout << "Enter the letter: ";
    cin >> letter;

    char vowels[] = {'a','e','i','o','u','A','E','I','O','U'};

    for(int i = 0; i < 10; i++){
        if(letter == vowels[i]){
            cout << "The letter is a vowel";
            return 0;   
        }
    }

    
    cout << "The letter is a consonant";

    return 0;
}


    

