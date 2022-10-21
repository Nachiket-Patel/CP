#include<iostream>
using namespace std;

int main(){
    int x,step=0;
    cin >> x;
    while(x){
        if(x>=5){
            x-=5;
            step++;
        }
        else if(x>=4){
            x-=4;
            step++;
        }
        else if(x>=3){
            x-=3;
            step++;
        }
        else if(x>=2){
            x-=2;
            step++;
        }
        else{
            x-=1;
            step++;
        }
    }
    cout << step << endl;
    return 0;
}