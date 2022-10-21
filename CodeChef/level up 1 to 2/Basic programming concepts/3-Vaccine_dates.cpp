#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int d,l,r;
    while(t--){
        cin >> d >> l >> r;
        if((l <= d) && (d <= r)){
            cout << "Take second dose now\n";
        }
        else if(d > r){
            cout << "Too Late\n";
        }
        else{
            cout << "Too Early\n";
        }
    }
    return 0;
}