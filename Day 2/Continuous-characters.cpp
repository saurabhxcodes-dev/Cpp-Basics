#include <iostream>
using namespace std;
int main() {

    int n;
    cout <<"Enter your number brotha: ";
    cin >> n;

    int i =1;
    char ch = 'A'; //Define outside the loop so it keeps increasing.
    while (i<=n){
        int j=1;
        while (j<=i){
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}