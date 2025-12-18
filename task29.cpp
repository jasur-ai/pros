#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    cout<<"Obuna turi : (asosiy =1, premium=2, vip=3) \n";
    cin>>a;
    if (a==1) cout<<"Asosiy obuna narxi: 500000 so'm \n";
    else if (a==2) cout<<"Premium obuna narxi: 900000 so'm \n";
    else if (a==3) cout<<"Vip obuna narxi: 1500000 so'm \n";
    else cout<<"Bunday obuna yo'q. \n";
    return 0;
} 