#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a,x,b;
    while(t--){
        cin >> a >> b >> x;
        cout << (b - a)/x << endl;
    }
    return 0;
}