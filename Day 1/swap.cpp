#include <iostream>
using namespace std;

int main() {
    int a,b, temp;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "After Swapping: a =" << a << ", b = " << b << endl;
    return 0;


} 