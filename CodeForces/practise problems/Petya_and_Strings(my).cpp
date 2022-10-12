//this code do not work for this test case
//aslkjlkasdd
//asdlkjdajwi
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    cout << s1 << endl;
    cout << s2 << endl;
    char ch1[s1.size()-1],ch2[s2.size()-1];
    int n1 = 0,m1 = 0,n2 = 0,m2 = 0;

    for(int i = 0; i < s1.size(); i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    cout << s1 << endl;
    cout << s2 << endl;

    for(int j = 0; j < s2.size(); j++){
        ch1[j] = s1[j];
        n1 = tolower(ch1[j]);
        m1 = m1 + n1;
        
        ch2[j] = s2[j];
        n2 = tolower(ch2[j]);
        m2 = m2 + n2;
    }

    cout << "m1: " << m1 << endl;
    cout << "m2: " << m2 << endl;

    if(m1 == m2){
        cout << "0\n";
    }
    else if(m1 > m2){
        cout << "1\n";
    }
    else{
        cout << "-1\n";
    }
    return 0;
}