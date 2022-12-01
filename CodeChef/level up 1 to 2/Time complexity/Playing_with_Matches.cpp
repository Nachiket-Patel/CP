#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,total=0,matches[10] = {6,2,5,5,4,5,6,3,7,6};
        cin >> a >> b;
        total = a+b;
        if(total<10){
            cout << matches[total] << endl;
        }
        else{
            int digit=0,count=0;
            while(total>0){
                digit = total%10;
                count += matches[digit];
                total/=10;
            }
            cout << count << endl;
        }
    }
    return 0;
}