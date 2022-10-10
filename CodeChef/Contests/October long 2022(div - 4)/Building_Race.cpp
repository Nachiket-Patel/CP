#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        float a,b,x,y;
        cin >> a >> b >> x >> y;
        if((a/x) == (b/y)){
            cout << "Both\n";
        }
        else if((a/x) > (b/y)){
            cout << "Chefina\n";
        }
        else{
            cout << "Chef\n";
        }
    }
    return 0;
}