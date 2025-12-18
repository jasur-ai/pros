#include <iostream>
using namespace std;
int main() {
    double n,m,d,z;
   while ((n>=0 || n<=100) && (z>=0 ||z<=100) && (d>=0 || d<=100) ) {
   cout<<"Birinchi baho: \n";
    cin>>n;
    cout<<"Ikkinchi baho: \n";
    cin>>z;
    cout<<"Uchinchi baho: \n";
    cin>>d;
    int summa = (n + z + d)/3;
    if ((summa)<60) cout<<summa<<"  Yiqildi  \n";
    else cout<<summa<<" O'tdi  \n";
    cout<<"Tugatilsinmi? (ha-1, yo'q-0) \n";
    int tugatish;   
    cin>>tugatish;
      if (tugatish == 1) break;
}
    
    return 0;
} 