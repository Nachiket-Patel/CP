#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,num=0;
        cin>>a>>b>>c;
        for(int i=2; i<=100; i++){
            if(a%i!=0 && b%i!=0 && c%i!=0){
                num = i;
                break;
            }
        }
        cout<<"num: "<<num<<endl;
    }
    return 0;
}