#include<iostream>
using namespace std;

int main(){
    int t;
    cout << "enter t: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "enter n: ";
        cin >> n;
        int sum = 0;
        while(n != 0){
            int r = n % 10;
            sum = r + sum;
            n = n / 10;
        }
        cout << sum << endl;
    }
    return 0;
}