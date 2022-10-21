#include<iostream>
using namespace std;

int main(){
    int t;
    char s;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> s;
        if(s == 'b' || s == 'B'){
            cout << "BattleShip\n";
        }
        else if(s == 'c' || s == 'C'){
            cout << "Cruiser\n";
        }
        else if(s == 'd' || s == 'D'){
            cout << "Destroyer\n";
        }
        else if(s == 'f' || s == 'F'){
            cout << "Frigate\n";
        }
        
    }
    return 0;
}