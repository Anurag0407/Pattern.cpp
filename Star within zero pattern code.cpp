#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n+1;j++)
        {
            if((j==n+1)||(i==j)||(j==2*n-i+2))
            cout<<"*";
            else
            cout<<0;
        }
    cout<<endl;
    }
return 0;
}
