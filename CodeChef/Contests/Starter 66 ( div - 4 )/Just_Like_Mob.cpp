// solution works but TLE error
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k,x,day=0,total=0;
        cin>>n>>m>>k>>x;
        day += n*k + m;

        while(total < x){
            total += day;
        }
        
        if(total-(n+m) <= x && x <= total){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}