#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter your amount: ₹"; 
    cin >> n;
    int notes;
    
    switch (1) {
        case (1):
         notes = min(n/2000,100);//Total number of ₹2000 notes doesn't exceed 100.
         n=n- (notes * 2000);
         cout << "₹2000 notes = " << notes << endl;
         
        case (2):
         notes = n/500;
         n=n%500;
         cout << "₹500 notes = " << notes <<endl;
         
        case (3):
         notes = n/200;
         n=n%200;
         cout << "₹200 notes = " << notes <<endl;
         
        case (4):
         notes = n/100;
         n = n % 100;
         cout << "₹100 notes = " <<notes <<endl;
         
        case (5):
         notes = n/50;
         n=n % 50;
         cout << "50 notes = " << notes <<endl;
         
        case (6):
         notes = n/20;
         n=n%20;
         cout << "₹ 20 notes = """ << notes <<endl;
         
        case (7):
         notes = n/10;
         n=n%10;
         cout << "₹10 notes = "<< notes <<endl;
         
        case (8):
        notes = n/5;
        n=n%5;
         cout << "₹5 notes = " << notes << endl;
         
        case (9):
         notes = n/1;
         n=n%1;
         cout << "₹1 coins = " << notes <<endl;
         
      break;
      
    default:
      cout << "Invalid case" <<endl;
    }
    return 0;
    
}