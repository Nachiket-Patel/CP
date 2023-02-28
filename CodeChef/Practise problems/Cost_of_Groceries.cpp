#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,total=0;
        cin>>n>>x;
        int fresh[n],cost[n];
        for(int i=0; i<n; i++){
            cin>>fresh[i];
        }
        for(int j=0; j<n; j++){
            cin>>cost[j];
        }
        for(int k=0; k<n; k++){
            if(fresh[k]>=x){
                total += cost[k];
            }
        }
        cout<<total<<endl;
    }
    return 0;
}