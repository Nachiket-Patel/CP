#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z,count=0;
        cin >> x >> y >> z;
        if(y==z){
            cout << x << endl;
        }
        else{
            while(y>0){
                if(y>0){
                    y -= z;
                    count++;
                }
            }
            cout << count*x << endl;
        }
    }
    return 0;
}