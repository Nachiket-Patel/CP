#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n,s;
    while(t--){
        cin >> n >> s;
        if(n == s){
            cout << s << endl;
        }
        else if(n > s){
            cout << s << endl;
        }    
        else{
            cout << n - (s-n) << endl;
        }
    }
    return 0;
}