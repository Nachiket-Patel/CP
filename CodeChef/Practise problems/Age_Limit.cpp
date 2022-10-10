#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,a;
        cin >> x >> y >> a;
        if((x<=a) && (y>a)){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}