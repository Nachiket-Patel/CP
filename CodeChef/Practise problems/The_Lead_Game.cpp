// this is my solution but it shows wrongs answer in codechef, but I think my logic is right.
//so I keep this solution to

#include<iostream>
using namespace std;

 int main(){
    int n,p1,p2,s1=0,s2=0,lead=0,w=0;
    cin >> n;
    while(n--){
        cin >> p1 >> p2;
        if(p1>p2){
            s1 = p1-p2;
            if(s1>lead){
                lead = s1;
                w = 1;
            }
        }
        else{
            s2 = p2-p1;
            if(s2>lead){
                lead = s2;
                w = 2;
            }
        }
    }

    if(w==1){
        cout << w << " " << lead << endl;
    }
    else if(w==2){
        cout << w << " " << lead << endl;
    }
    return 0;
}