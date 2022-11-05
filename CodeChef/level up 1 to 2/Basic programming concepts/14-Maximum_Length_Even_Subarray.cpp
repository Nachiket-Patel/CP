#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,sum=0;
        cin >> n;
        for(int i=0; i<=n; i++){
            sum += i;
        }
        if(sum%2!=0){
            cout << n-1 << endl;
        }
        else{
            cout << n << endl;
        }
    }
    return 0;
}