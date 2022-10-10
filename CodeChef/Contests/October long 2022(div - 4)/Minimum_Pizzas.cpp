#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    float n,x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        cout << ceil((n*x)/4) << endl;
    }
    return 0;
}