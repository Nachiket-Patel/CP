#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(abs(x-y) == 1){
            cout<<"1\n";
        }
        else if(abs(x-y) % 2 == 0){
            cout<<abs(x-y) / 2<<endl; 
        }
        else if(abs(x-y) != 0){
            cout<<abs(x-y) / 2 + 1<<endl; 
        }
    }
    return 0;
}