#include <iostream>
#include <string>
using namespace std;

string getOrdinalsuffix (int n) {
    if (n % 100 >= 11 && n % 100 <=13)
    return "th";

    switch (n % 10) {
        case 1: return "st";
        case 2: return "nd";
        case 3: return "rd";
        default: return "th";
    }
}
int NthtermofAP (int a, int d, int n) {
    return a + (n-1) * d;
}
int main () {
    int a, d, n;
    cout << "Enter the first term 'a' ";
    cin >>a;

    cout <<"Enter the common difference 'd' ";
    cin >>d;

    cout << "Enter the term number 'n' ";
    cin >>n;
    int result =NthtermofAP (a, d, n);
    cout << "The " << n << getOrdinalsuffix(n) << " term of the AP is: " << result << endl;
    return 0;

}