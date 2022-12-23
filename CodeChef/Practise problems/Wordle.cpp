#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s,t,m;
        cin >> s >> t;
        for(int i=0; i<5; i++){
            if(s[i]==t[i]){
                cout << "G";
            }
            else{
                cout << "B";
            }
        }
        cout << endl;
    }
    return 0;
}