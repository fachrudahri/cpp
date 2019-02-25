#include <iostream>
#include <functional>

using std::cin;
using std::cout;
using std::endl;
using std::function;

int main() {

    //Wrapped lambda expression. You can create a function that does the same thing.
    function<int(int,int)> gcd = [&](int m, int n){
        if(m<n) return gcd(n,m);
        int remainder(m%n);
        if(0 == remainder) return n;
        return gcd(n,remainder);
    };

    int num1,num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    //Check if user input is negative. 
    num1 = (num1 > 0) ? num1 : -num1;
    num2 = (num2 > 0) ? num2 : -num2;


    cout << "Greatest Common Divisor: " << gcd(num1,num2) << endl;

}