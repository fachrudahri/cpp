#include <iostream>
using namespace std;

int main() {
    int nilA = 438;
    int nilB = 49;
    int mod1 = nilA%nilB;
    int hcf;
    cout <<"APLIKASI MODULO BY FACHRU DAHRI (17350068)"<<endl;
    cout <<"++++++++++++++++++++++++++++++++++++++++++"<<endl<<endl;
    cout <<"mencari nilai GDC "<<nilA<<" mod "<<nilB<< " adalah : "<<mod1<<endl;

    // pengkondisian nilai
    
    for (int i = 1; i <=  nilB; ++i) {

        if (nilA % i == 0 && nilB % i ==0) {
            hcf = i;

        }
    }

    cout << "GDC sebenarnya adalah = " << hcf<<endl;
    return 0;
}