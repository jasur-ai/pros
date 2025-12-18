#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    cout<<"Hafta kuni : (1-7) \n";
    cin>>a;
    if (a>5 && a<=7) cout<<"Dam olish kuni \n";
    else if (a>0 && a<=5) cout<<"Ish kuni \n";
    else cout<<"Bunday hafta kuni yo'q. \n";
    return 0;
} 