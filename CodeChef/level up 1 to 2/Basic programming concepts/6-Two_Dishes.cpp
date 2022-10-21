#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int guest,n,a,b,c,num=0;
        cin >> n >> a >> b >> c;
        cout << "n: " << n << "  a: " << a << "  b: " << b  << "  c: " << c << endl;
        guest = n;
        while(guest--){
            int count = 0;
            if((a>0) && (b>0)){
                a-=1;
                b-=1;
                count++;
                cout << "loop  " << "a: " << a << "  b: " << b << endl; 
            }
            if((c>0) && (b>0)){
                b-=1;
                c-=1;
                count++;
                cout << "loop  " << "b: " << b << "  c: " << c << endl; 
            }
            cout << "loop  count: " << count << endl;
            num = count;
        }

        cout << "num: " << num << endl;
        cout << "n: " << n << endl;
        if(num==n){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}