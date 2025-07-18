#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter your number: ";
    cin >>n;

    int i=1;
    while (i<=n) {
        int space = n-i;
        while (space>=1) {
            cout << " ";
            space--;
            
        }
        int j=1;
        while (j<=i) {
            cout << i;
            //if we cout << j; instead of i, and cout << start; instead of i in line 24, we will get a pyramid like this : 
            //   1
            //  121
            // 12321
            j++;
        }
        int start = i-1;
        while (start >=1) {
            cout << i;
            start--;
        }
        cout <<endl;
        i++;
    }
}