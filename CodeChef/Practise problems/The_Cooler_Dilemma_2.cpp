#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int d = y/x;
        if(d*x<y){
            cout << d << endl;
        }
        else{
            cout << d-1 << endl;
        }
    }
    return 0;
}