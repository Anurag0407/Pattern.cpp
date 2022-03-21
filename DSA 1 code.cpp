#include <iostream>
using namespace std;
int main() {
    int n,rn;
    cin>>n;
    // upper part 
    for(rn=1;rn<=(n+1)/2;rn++)
    {
        // space 1
        for(int spc=1;spc<=2*((n+1)/2-rn);spc++)
        {
            cout<<" "<<'\t';
        }
        for(int col=rn;col>=1;col--)
        {
            cout<<col<<'\t';
        }
        // middle space
        for(int sp=1;sp<=(2*rn-2)-1;sp++)
        {
            cout<<" "<<'\t';
        }
        // right upper pattern
        int str=1;
        for(int inc=rn;inc>=1;inc--)
        {
            if(rn==1)
            {
               continue;
            }
            cout<<str<<'\t';
            str++;
        }
        cout<<endl;
    }
       //lower part 
       for(rn=1;rn<(n+1)/2;rn++)
       {
           // space 2
        for(int spc1=1;spc1<=2*rn;spc1++)
        {
            cout<<" "<<'\t';
        }
        // number pattern right lower
        for(int col1=(n+1)/2-rn;col1>=1;col1--)
        {
            cout<<col1<<'\t';
        }
        // middle lower space 
        for(int sp1=n/2;sp1>=(2*rn)-1;sp1--)
        {
            cout<<" "<<'\t';
        }
        int str1=1;
        // right lower pattern 
        for(int inc1=1;inc1<=(n+1)/2-rn;inc1++)
        {
            if(rn==n/2)
            {
               break;
            }
            cout<<str1<<'\t';
            str1++;
        }
        cout<<endl;
    }
    return 0;
}
