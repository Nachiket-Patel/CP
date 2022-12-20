#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n >> x >> y;
        if(y==0 || y%x==0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}