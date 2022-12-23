#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double salary;
        cin >> salary;
        if(salary<1500){
            cout<<fixed<<setprecision(2)<<salary+salary*0.1+salary*0.9<<endl;
        }
        else{
            cout<<fixed<<setprecision(2)<<salary+500+salary*0.98<<endl;
        }
    }
    return 0;
}