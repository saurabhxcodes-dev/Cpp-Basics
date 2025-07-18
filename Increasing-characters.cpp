#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter your number: ";
    cin>> n;
    
    int i=1;
    while (i<=n){
        int j=1;
        //if we define char ch = 'A' + i - 1 here only, we will get ABCD in increasing form.
        while (j<=i){
            char ch = 'A' + j - 1;
            //if we cout << 'A' + i - 1, we will get same character in each row.
            cout << ch;
            j++;
        }
        cout<< endl;
        i++;
    }
}