#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	// upper half
	for(int i=0;i<=n/2;i++){

		//n/2-i spaces
		for(int spc=n/2-i;spc>0;spc--)
        {
			cout<<"  ";
        }
		// 2*i+1 stars
		for(int j=0;j<2*i+1;j++)
        {
			cout<<"* ";
        }
		cout<<endl;
	}
	//lower half == reverse of upper half
	for(int i=n/2-1;i>=0;i--){

		//n/2-i spaces
		for(int spc=n/2-i;spc>0;spc--)
		{
         cout<<"  ";
        }
		// 2*i+1 stars
		for(int j=0;j<2*i+1;j++)
        {
			cout<<"* ";
        }
		cout<<endl;
	}
	return 0;
}