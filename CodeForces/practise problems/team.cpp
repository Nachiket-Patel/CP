#include<iostream>
using namespace std;

int main(){
    int n,x,y,z,count = 0;
    cin >> n;
    while(n--){
        cin >> x >> y >> z;
        if((x==1 && y==1) || (x==1 && z==1) || (y==1 &&  z==1)){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}