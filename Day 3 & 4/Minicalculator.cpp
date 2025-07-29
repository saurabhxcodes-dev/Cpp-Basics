#include <iostream>
using namespace std;
int main () {
    int a;
    cout << "Enter a: ";
    cin >> a;
    int b;
    cout << "Enter b: ";
    cin>> b;
    char op;
    cout << "Enter the Operation you want to perform: ";
    cin >> op;
    
    switch (op){
        case '+':
         cout << "a+b= " << (a+b) <<endl;
         break;
         
        case '-':
         cout << "a-b= " << (a-b)<<endl;
         break;
         
        case '*':
         cout << "a*b= " << (a*b) <<endl;
         break;
         
        case '/':
         cout << "a/b= " << (a/b) <<endl;
         break;
         
        case '%':
         cout << "a%b= " << (a%b) <<endl;
         break;
         
        default :
        cout << "Invalid Operation (a&b must be Integers)" <<endl;
    }
    
}