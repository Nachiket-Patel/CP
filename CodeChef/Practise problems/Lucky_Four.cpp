#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x,count=0,n;
	    cin >> x;
	    for(int i=0;x!=0;i++){
	        n = x % 10;
	        if(n==4){
	            count++;
	        }
	        x /= 10;
	    }
	    cout << count << endl;
	}
	return 0;
}
