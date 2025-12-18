#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    cout<<"necha oylik obuna? (1,3,12) \n";
    cin>>a; 
    if (a==1) cout<<"Jami to'lov: 120000 so'm \n"; 
    else if (a==3) cout<<"Jami to'lov: 300000 so'm \n"; 
    else if (a==12) cout<<"Jami to'lov: 1000000 so'm \n"; 
    else cout<<"Bunday obuna yo'q. \n";
    return 0;
} 