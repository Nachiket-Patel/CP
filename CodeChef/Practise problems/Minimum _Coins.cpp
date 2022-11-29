#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,coins=0;
        cin >> x;
        while(x>0){
            if(x>10){
                x %= 10;
            }
            else{
                x--;
                coins++;
            }
        }
        cout << coins << endl;
    }
	return 0;
}
