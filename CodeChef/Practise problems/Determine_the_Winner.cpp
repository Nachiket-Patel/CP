#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int pa,pb,qa,qb;
        cin>>pa>>pb>>qa>>qb;
        int max1 = max(pa,pb);
        int max2 = max(qa,qb);
        if(max1>max2){
            cout << "Q\n";
        }
        else if(max2>max1){
            cout << "P\n";
        }        
        else{
            cout << "TIE\n";
        }
    }
    return 0;
}