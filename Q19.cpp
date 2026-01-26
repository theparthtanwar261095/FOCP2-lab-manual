#include <iostream>
using namespace std;

int main(){
    int start, end;

    cout << "Enter from where to start: ";
    cin >> start;

    cout << "Enter where to end: ";
    cin >> end;

    for(int i = start; i <= end; i++){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }

    return 0;
}
