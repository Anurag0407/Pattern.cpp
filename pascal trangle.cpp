
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 0;

    while (i <= n - 1)
    {
        int j = 0;
        int iCj=1; 
        cout<<iCj<<"\t";
        j=1;
        while (j <= i)
        { 
            iCj = (iCj * (i-j+1))/j;
            cout<<iCj<<"\t";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }

    return 0;
}