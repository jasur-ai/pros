// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int s;
    cout<<"Trafik: ";
    int n,m;
    cin>>n;
    s=n/1024;
    m=n%1024;
    cout<<"Jami trafik: "<<s<<" GB "<<m<<" MB"<<endl;

    return 0;
}
