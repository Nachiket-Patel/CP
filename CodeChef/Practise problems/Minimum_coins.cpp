#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,coins=0;
        cin >> x;
        x %= 10;
        while(x>0){
            x--;
            coins++;
            
        }
        cout << coins << endl;
    }
	return 0;
}
