#include<iostream>
using namespace std;

int main(){
    int t,count = 0;
    cin >> t;
    string s;
    
    while(t--){
        int count = 0;
        cin >> s;
        
        for(int i = 0; i < s.size(); i++){
            
            if(count > 2){
                break;
            }
            else if((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')){
                count++;
            }
            else{
                count = 0;
            }

        }
        
        if(count > 2){
            cout << "Happy\n";
        }
       else{
            cout << "Sad\n";
        }
        
    }
    return 0;
}