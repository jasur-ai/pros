#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    cout<<"Marka : (AI 80, 92, 95); \n";
    cin>>a;
    cout<<"Yoqilgi miqdori (litr): \n";
    cin>>b;
    if (a==80) c=b*4200;
    else if (a==92) c=b*4800;
    else if (a==95) c=b*5500;
    else cout<<"Bunday marka yo'q. \n";
    cout<<"Sizdan "<<c<<" so'm \n";
    return 0;
} 