#include<iostream>
using namespace std;

int main(){
    int n = 21234,r;
    while(n != 0){
        r = n % 10;
        n = n / 10;
    }
            cout << r<<" "<<n;

}