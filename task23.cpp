#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    cout<<"masofani kiriting (km): \n";
    cin>>a; 
    cout<<"Vaqtni kiriting (soat): \n";
    cin>>b;
    c = a / b;
    cout<<"Tezlik: "<<c<<" km/soat \n";
    if (c>120) cout<< "Ortiqcha tezlik! \n";
    else cout<<"Muommo yo'q  \n";
    return 0;
} 