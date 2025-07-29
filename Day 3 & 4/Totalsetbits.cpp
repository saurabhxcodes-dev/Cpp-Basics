#include <iostream>
using namespace std;

int countsetbits (int n) {
    int count = 0;
    while (n>0) {
        if (n&1) count ++; // check if the last bit is set
        n = n>>1; // right shift to check next bit

    }
    return count;
}
int main () {
    int a, b;
    cout << "Enter a: ";
    cin >> a ;
    cout << "Enter b: ";
    cin >>b;
    int totalsetbits = countsetbits (a) + countsetbits (b);
    cout << "Total set bits in " << a << " and " << b << " is " << totalsetbits << endl;
    return 0;
}