//This is my solution 

#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s,t,M;	   
	    cin>>s>>t;
	    M="*****";
	    for(int i =0; i<5; i++){
	        if(s[i]==t[i]){
	            M[i]='G';
	        }
	        else{
	           M[i]='B';
	        }
	        cout<<M<<endl;
	    }
	    return 0;
    }
}