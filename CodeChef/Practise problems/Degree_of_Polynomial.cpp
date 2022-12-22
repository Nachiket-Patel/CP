#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,count;
        cin >> n;
        int num[n];
        for(int i=0; i<n; i++){
            cin >> num[i];
            if(num[i] != 0){
                count = i;
            } 
        }
        cout << count << endl;
    }
    return 0;
}