#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*i-1;j++)
        {
            if(j%2!=0)
            cout<<i<<'\t';
            else
            cout<<"*"<<'\t';
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=2*i-1;j>=1;j--)
        {
            if(j%2!=0)
            cout<<i<<'\t';
            else
            cout<<"*"<<'\t';
        }
        cout<<endl;
    }
return 0;
}
