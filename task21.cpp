#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    cout<<"maoshni kiriting (so'mda): \n";
    cin>>a;
    if (a>3000000) {
        b = a - (a * 0.12);
        cout<<"Soliq: "<<a * 0.12<<" Soliqdan keyingi maosh: "<<b<<" so'm \n";
    }
    else {
        b = a - (a * 0.06);
        cout<<"Soliq: "<<a * 0.06<<" Soliqdan keyingi maosh: "<<b<<" so'm \n";
    }
    return 0;
} 