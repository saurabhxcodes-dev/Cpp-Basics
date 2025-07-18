#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter your number: ";
    cin>> n;

    int i=1;
    while (i<=n) {
        int j = 1;
        while (j<=n-i+1) {
            //cout<<i; if you want to print same number in each row.
            cout <<j;
            j++;
        }
        cout<<endl;
        i++;
    }
} 