#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        float x,y;
        cin >> x >> y;
        if(y/x >= 0.5){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}