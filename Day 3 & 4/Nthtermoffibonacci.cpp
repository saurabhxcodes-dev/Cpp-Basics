#include <iostream>
using namespace std;
int fibonacci (int n) {
    if (n==0) return 0;
    if (n==1) return 1;

    int prev = 0;
    int curr = 1;

    for (int i = 2; i<=n; i++) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}
int main () {
    int n ;
    cout << "Enter n: ";
    cin >> n;
    int result = fibonacci (n);

    cout << "The Fibonacci term at position " << n << " is " << result << endl;
}