#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h,x,y,c;
        cin>>h>>x>>y>>c;
        int water = h*(x+floor(y/2));
        if(water<=c){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}