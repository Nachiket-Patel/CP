#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,ans;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int j=0; j<n; j++){
            cout << a[j] << endl;
        }
        for(int k=0; k<n-1; k++){
            ans = a[k]^a[k+1];
            cout << "ans: " << ans <<  endl;
        }
    }
}