#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,sum=0;
        cin >> a >> b >> c;
        sum = a + b;
        if(sum < b+c){
            sum = b + c;
        }
        if(sum < c+a){
            sum = c + a;
        }
        cout << sum << endl;
    }
    return 0;
}