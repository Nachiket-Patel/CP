#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%4==1 || n%4==2 || n%4==3){
            cout << n/4+1 << endl;
        }
        else{
            cout << n/4 << endl;
        }
    }
    return 0
}