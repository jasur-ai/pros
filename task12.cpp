#include <iostream>
using namespace std;
int main() {
    double n,m,z;
    cout<<"Miqdor 1- (taraf): \n";
    cin>>n;
cout<<"2-taraf: \n";
    cin>>m;
 cout<<"3-taraf: \n";
    cin>>z;   
    if (n<=m+z && m<=n+z && z<=m+n) cout<<"Granted \n";
    else cout<<"impossible \n";
    return 0;
}

