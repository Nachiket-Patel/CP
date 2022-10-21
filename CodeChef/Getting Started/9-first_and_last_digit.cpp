#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n,r,last,first;
    for(int i = 1; i <= t; i++){
        cin >> n;
        last = n % 10;
        while(n != 0){
            first = n % 10;
            n = n / 10;
        }
        cout << first+last << endl;
    }
    return 0;
}