#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    int i=1;
    while (i<=n){
        int j=1;
        while (j<=n-i+1) {
            cout << n-i+1;
            //if we cout << j; instead of n-i+1, we will get a right-aligned increasing numbers in each row.
            //and if we cout <<i; we will get same numbers repeating in each row.
            j++;
        }
        cout <<endl;
        i++;
    }
}