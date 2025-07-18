#include <iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter your number: ";
    //Entering numbers bigger than 9 may distort the pyramid shape.
    //Abhi seekh rha hu, itna alligination nhi aata.
    cin >> n;

    int i=1;
    while (i<=n) {
        int space = n-1;
        while (space>=i) {
            cout << " ";
            space --;

        }
        int j=1;
        while (j<=i) {
            cout <<j;
            j++;
        }
        cout <<endl;
        i++;
    }
}