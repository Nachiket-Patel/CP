#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int x = abs(a-c);
        int y = abs(b-d);
        if(x+y>k){
            cout << "No\n";
        }
        else if((x+y-k)%2==0){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}