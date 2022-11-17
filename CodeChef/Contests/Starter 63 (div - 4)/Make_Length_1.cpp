#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s,a;
        cin >> s;
        while(n > 0){
            cout << "n: " << n << endl;
            for(int i=0; i<n-1; i++){
                a[i] = s[i];
                if(a.size()>0){
                    cout << a[i] << endl;
                }
            }
            for(int j=0; j<a.size(); j++){
                cout << a[j];
            }
            cout << endl;
            n--;
        }
    }
    return 0;
}