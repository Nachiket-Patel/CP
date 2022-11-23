#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b,time=0;
        cin >> n >> a >> b;
        while(n>1){
            n /= 2;
            time = time+ (a+b);
        }
        cout << time-b << endl;
    }
    return 0;
}