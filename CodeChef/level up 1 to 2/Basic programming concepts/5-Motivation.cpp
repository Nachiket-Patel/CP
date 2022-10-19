#include<iostream>
using namespace std;

int main(){
    int t,n,x,s,r,rating = 0;
    cin >> t;
    while(t--){
        cin >> n >> x;
        while(n--){
            cin >> s >> r;
            if(x>=s){
                if(r > rating){
                    rating = r;
                }
            }
        }
        cout << rating << endl;
        rating = 0;

    }
}