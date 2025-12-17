
#include <iostream>
using namespace std;
int main() {
    int n;
    double m;
    cout<<"Miqdor (kg): \n";
    cin>>n;
    if (n<6) m=n*8000;
    else m=n*8000*0.95;
    cout<<"Jami : "<<m<<" so'm "<<endl;

    return 0;
}

