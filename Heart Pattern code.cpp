#include <iostream>
using namespace std;
int main() {
    int n,rn;
    cin>>n;
    for(rn=1;rn<n;rn++)
    {
      for(int spc=1;spc<=n-rn;spc++)
      {
          cout<<" ";
      }
      for(int i=1;i<=2*rn;i++)
      {
          cout<<"*";
      }
      for(int sp=1;sp<=2*(n-rn);sp++)
      {
          cout<<" ";
      }
      for(int j=1;j<=2*rn;j++)
      {
          cout<<"*";
      }
      cout<<endl;
    }
    for(int rn=1;rn<=n/2;rn++)
    {
        for(int k=1;k<=4*n;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }   
    for(int rn=1;rn<=2*n-1;rn++)
    {
        for(int sp1=1;sp1<=rn;sp1++)
        {
            cout<<" ";
        }
        for(int inc=4*n-2;inc>=2*rn-1;inc--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
return 0;

}
