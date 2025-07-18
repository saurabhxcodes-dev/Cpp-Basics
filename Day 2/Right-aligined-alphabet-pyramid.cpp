#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    int i=1;
    while (i<=n){
        int space = n-i;
        while (space>=1){
            cout << " ";
            space--;
        }
        int j=1;
        while (j<=i){
            char ch = 'A' + i -1;
            cout << ch;
            j++;
        }
        int start = i-1;
        while (start >=1 ){
            char ch = 'A' + i -1;
            cout <<ch;
            start--;
        }
        cout << endl;
        i++;
    }
}