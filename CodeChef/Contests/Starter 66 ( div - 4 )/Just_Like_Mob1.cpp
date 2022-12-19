// solution works without TLE
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k,x,day=0;
        cin>>n>>m>>k>>x;
        day += n*k + m;
        
        if(day-(n+m) <= x%day && x%day <= day){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}