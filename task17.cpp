#include <iostream>
using namespace std;
int main() {
    double n,m,z;
    cout<<"Vip obuna soni; \n";
    cin>>n; 
    cout<<"Oddiy obuna soni; \n";
    cin>>z; 
    long long sum = (n*120000)+(z*60000);
    cout<<"Jami to'lov: "<<sum<<" so'm \n"; 
    cout<<n<<" ta vip obuna uchun "<<n*120000<<" so'm \n";
    cout<<z<<" ta oddiy obuna uchun "<<z*60000<<" so'm\n";
    cout<<"Umumiy obunalar. \n"<<n+z<<" ta \n";
    
    return 0;
} 