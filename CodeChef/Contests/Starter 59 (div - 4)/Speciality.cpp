#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int x,y,z;
    while(t--){
        cin >> x >> y >> z;
        if((x > y) && (x > z)){
            cout << "Setter\n";
        }
        else if(y > z){
            cout << "Tester\n";
        }
        else{
            cout << "Editorialist\n";
        }
    }
    return 0;
}