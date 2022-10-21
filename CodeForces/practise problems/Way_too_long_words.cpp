#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    char first,last;
    while(n--){
        cin >> s;
        if(s.size()<= 10){
            cout << s << endl;
        }
        else{
            cout << s[0] << s.size()-2 << s[s.length()-1] << endl;
        }    
    }
    return 0;
}