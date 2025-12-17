// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,m;
    cout<<"Miqdor (v): \n";
    cin>>n;
    if (n<=1000) m=n*400;
    else m=(n-1000)*600+1000*400;
    cout<<"Jami : "<<m<<" so'm "<<endl;

    return 0;
}

