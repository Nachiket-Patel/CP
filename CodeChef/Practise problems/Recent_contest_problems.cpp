#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a=0,b=0;
        cin >> n;
        for(int i=0; i<n; i++){
            string s;
            cin >> s;
            if(s == "START38"){
                a++;
            }
            else if(s == "LTIME108"){
                b++;
            }
        }
        cout << a << " " << b << endl;
    }
    return 0;
}