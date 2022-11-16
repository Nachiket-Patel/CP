#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,flag=0;
        cin >> a >> b;
        for(int i=2; i<=(a+b)/2; i++){
            if((a+b)%i==0){
                cout << "Bob\n";
                flag = 1;
                break;
            }
        }
        if(flag==0){
            cout << "Alice\n";
        }    
    }
    return 0;
}