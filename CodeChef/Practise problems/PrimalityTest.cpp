#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    bool flag = true;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<2){
            flag = false;
        }
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                flag=false;
            }
        }
        if(flag){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}