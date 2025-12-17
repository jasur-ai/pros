#include <iostream>
using namespace std;
int main() {
    double n,m,z=0;
    cout<<"RAM: \n";
    cin>>n;
    cout<<"RAM: \n";
    cin>>m;
    
    if (n==8) z+=400000;
    else if (n==16) z+=600000;
     else cout<<"wtf?";
    if (m==256) z+=300000;
    else if (m==512) z+=450000;
    else cout<<"wtf?";
         cout<<z<<"-umumiy "<<n<<" ram, "<<m<<" xotira";
    return 0;
} 