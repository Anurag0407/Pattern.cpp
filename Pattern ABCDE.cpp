#include <iostream>
using namespace std;
int main() 
{
  int N;
  cin>>N;
  int row=1;
  while(row<=N)
  {
     // Increasing sequence
    int in=1;
    char sc='A';
    while(in<=((N+1)-row))
    {
       cout<<sc;
       sc=sc+1;
       in=in+1;
    } 
  // decreasing sequence
     sc=sc-1;
     int dec=1;
     while(dec<=((N+1)-row))
    {
       cout<<sc;
       sc=sc-1;
       dec=dec+1;
    }        
    cout<<endl;
    row=row+1; 
  }
    return 0;
}
