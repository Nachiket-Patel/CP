#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a,b;
    for(int i = 1; i <= t; i++){
        int remainder;
        cin >> a >> b;
        cout << a % b << endl;
    }
    return 0;
}