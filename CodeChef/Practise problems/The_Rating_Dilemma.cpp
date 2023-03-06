#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int x,y;
        x=s+1;
        y=s-x;
        cout<<x*y<<endl;
    }
    return 0;
}