//This is solution which shows correct answer in codechef.
// so I keep this for understanding
// This is correct solution
#include<iostream>
using namespace std;

int main(){
    int n,p1,p2,t1=0,t2=0,w=0,lead=0;
    cin >> n;
    while(n--){
        cin >> p1 >> p2;
        t1 += p1;
        t2 += p2;
        if(t1 - t2 > lead || t2 - t1 > lead){
            lead = abs(t1-t2);
        }
        if(lead == t1 - t2){
            w = 1;
        }
        if(lead == t2 - t1){
            w = 2;
        }
    }
    cout << w << " " << lead;
    return 0;
}