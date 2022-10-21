#include<iostream>
using namespace std;

int main(){
    int m,n,area;
    cin >> m >> n;
    area = m * n;
    if(area % 2 == 0){
        cout << area / 2 << endl;
    }
    else{
        area - 1;
        cout << area / 2 << endl;
    }
    return 0;
}