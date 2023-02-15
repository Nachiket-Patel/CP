#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        if(y>x*10){
            cout << x*10*z << endl;
        }
        else{
            cout << y*z << endl;
        }
    }
    return 0;
}