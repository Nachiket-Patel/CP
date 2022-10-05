#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int binary;
    while(t--){
        cin >> binary;
        if((binary >= 67) && (binary <= 45000)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}