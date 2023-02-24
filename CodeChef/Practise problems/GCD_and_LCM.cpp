#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,m,lcm;
        cin>>a>>b;
        m = min(a,b);
        for(int i=1; i<=m; i++){
            if(a%i==0 && b%i==0){
                lcm = i;
            }
        }
        long gcm = long(a)*long(b)/lcm;
        cout << lcm << " " << gcm << endl;
    }
    return 0;
}