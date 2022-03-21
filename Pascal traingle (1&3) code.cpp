#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   for(int rn=1;rn<=n;rn++)
   {
       for(int sp=1;sp<2*(n-rn)+5;sp++)
       {
           cout<<" ";
       }
       int val=1;
       cout<<val<<"   ";
       for(int col=1;col<rn;col++)
       {
           val=val*(rn-col)/col;
           cout<<val<<"   ";
       }
       cout<<endl;
   }
return 0;
}
