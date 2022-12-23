#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a<b && a<c){
            cout << "Draw\n";
        }
        else if(b<a && b<c){
            cout << "Bob\n";
        }
        else{
            cout << "Alice\n";
        }
    }
    return 0;
}