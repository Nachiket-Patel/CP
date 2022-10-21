#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num = 0,r = 0;
        while(n){
            r = n % 10;
            num = num * 10 + r;
            n = n / 10;
        }
        cout << num << endl;
    }
    return 0;
}