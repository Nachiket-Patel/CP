#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int guest,n,a,b,c,count=0;
        cin >> n >> a >> b >> c;
        guest = n;
        while(guest--){
            if((a>0) && (b>0)){
                a-=1;
                b-=1;
                count++;
            }
            if((c>0) && (b>0)){
                b-=1;
                c-=1;
                count++;
            }
        }

        if(count>=n){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}