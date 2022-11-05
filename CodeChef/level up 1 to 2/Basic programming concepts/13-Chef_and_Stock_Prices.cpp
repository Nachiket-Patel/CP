#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int s,c;
        float a,b,change=0;
        cin>>s>>a>>b>>c;
        if(a <= s+((s*c)/100.0) && s+((s*c)/100.0) <= b){
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }        
    }
}