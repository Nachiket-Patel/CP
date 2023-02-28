#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,total=0;
        cin>>n;
        int array[n];
        for(int i=0; i<n; i++){
            cin>>array[i];
        }
        if (n%2 != 0)
        {
            cout<<-1<<endl;
        }
        else{
            for(int j=0; j<n; j++){
                total += array[j];

            }
            cout<<abs(total)/2<<endl;
        }
    }
    return 0;
}