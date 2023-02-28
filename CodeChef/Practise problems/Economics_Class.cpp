#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int s[n],d[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        for(int j=0; j<n; j++){
            cin>>d[j];
        }
        for(int k=0; k<n; k++){
            if(s[k]==d[k]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}