#include <iostream>
using namespace std;
int main() {
    int rn,n;
    cin>>n;
    for(rn=1;rn<=n;rn++)
    {
        int str=1;
        for(int inc=1;inc<=n;inc++)
        {
            if(inc<=(n-rn+1))
            cout<<str<<'\t';
            else
            cout<<"*"<<'\t';
            str++;
        }
        int str1=str-1;
        for(int dec=n;dec>=1;dec--)
        {
            if(dec<=(n-rn+1))
            cout<<str1<<'\t';
            else
            cout<<"*"<<'\t';
            str1--;
        }
        cout<<endl;
    }
    return 0;
}
