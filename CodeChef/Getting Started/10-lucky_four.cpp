#include<iostream>
using namespace std;

int main(){
    int t,n,r = 0,count = 0;
    cin >> t;

    while(t--){
        cin >> n;
        while(n != 0){
            r = n % 10;
            if(r == 4){
                count++;
            }
            n /= 10;
        }
        cout << count << endl;
        count = 0;    }
    return 0;
}