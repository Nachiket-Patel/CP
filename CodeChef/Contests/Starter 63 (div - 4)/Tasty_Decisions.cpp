#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(x*2 == y*5){
            cout << "Either\n";
        }
        else if(x*2 > y*5){
            cout << "Chocolate\n";
        }
        else{
            cout << "Candy\n";
        }
    }
    return 0;
}