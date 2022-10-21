#include<iostream>
using namespace std;

int main(){
    float y;
    int x;
    cin >> x >> y;
    if((y-x >= 0.5) && (x % 5 == 0)){
        cout << y-x-0.5 << endl;
    }
    else{
        cout << y << endl;
    }
    return 0;
}
