#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,count=0;
        cin >> n;
        int p[n*2];
        for(int i=0; i<n*2; i++){
            cin >> p[i];
        }
        for(int i=0; i<n*2; i++){
            cout << "i: " << i << endl;
            count = 0;
            for(int j=i+1; j<n*2; j++){
                cout << "j: " << j << endl;
                cout << "p[i]: " << p[i] << "  " << "p[j]: " << p[j] << endl;
                if(p[i]==p[j]){
                    cout << "SAME\n";
                    count++;
                    cout << "count: " << count << endl;
                }
            }
            if(count > 1){
                break;
            }
        }
        cout << count << endl;
        if(count > 1){
            cout << "No\n";
        }
        else{
            cout << "Yes\n";
        }
    }
    return 0;
}