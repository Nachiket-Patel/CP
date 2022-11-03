#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(n<k){
            cout << n << endl;
        }
        else if(n==k){
            cout << n-k << endl;
        }
        else{
            while(n>k){
                n -= k;
            }
            cout << n << endl;
        }
    }
    return 0;
}