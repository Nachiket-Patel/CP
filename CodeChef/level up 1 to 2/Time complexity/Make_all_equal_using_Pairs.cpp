#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,count=0;
        cin >> n;
        int array[n];
        
        //input array
        for(int i=0; i<n; i++){
            cin >> array[i];
        }
        
        //checking all same elements
        for(int i=0; i<n; i++){
            for(int j=1; j<n; j++){
                if(array[i] != array[j]){
                    count++;
                }
            }
        }
        if(count==0){
            cout << count << endl;
        }
            
    }
    return 0;
}