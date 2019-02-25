#include <iostream>
using namespace std;

int main() {
    int n1 = 437;
    int n2 = 48;
    int hcf;
    cout <<n1<<" mod "<<n2<< " adalah : \n";

    // Swapping variables n1 and n2 if n2 is greater than n1.
    if ( n2 != n1) {   
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }
    
    for (int i = 1; i <=  n2; ++i) {
        if (n1 % i == 0 && n2 % i ==0) {
            hcf = i;
        }
    }

    cout << "HCF = " << hcf<<endl;
    return 0;
}