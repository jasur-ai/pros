#include <iostream>
using namespace std;
int main() {

   
    double a;
    while(a>0){
cout<<"Radius kiriting: \n";    
cin>>a;
if (a>0){
double s = 3.14*a*a;
cout<<"Doira yuzi: "<<s<<" kv.m \n";}
else cout<<"Radius manfiy bo'lishi mumkin emas. \n";
int tugatish;   
    cout<<"Yana hisoblaysizmi? (ha-1, yo'q-0) \n";
    cin>>tugatish;
      if (tugatish == 0) break;
    }
return 0;
} 