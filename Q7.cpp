#include <iostream>
using namespace std;

int main(void){
    int score1;
    int score2;
    int score3;

    cout << "Enter the score of player 1:";
    cin >> score1;

    cout << "Enter the score of player 2:";
    cin >> score2;

    cout << "Enter the score of player 3:";
    cin >> score3;

    if(score1 > score2 && score1 > score3){
        cout << "The winner is player 1";
    }
    else if(score2 > score1 && score2 > score3){
        cout << "The winner is player 2";
    }
    else{
        cout << "The winner is player 3";
    }

    return 0;
}
