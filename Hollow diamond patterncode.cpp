#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	if(N==1)
	{
		cout<<"*";
		return 0;
	}
	for(int i=0 ; i<=N/2 ; i++)
	{
		for(int j=0 ; j<=(N/2)-i ; j++)
		{
			cout<<"*"<<"\t";
		}
		
		for(int j=0 ; j<2*i-1 ; j++)
		{
		cout<<" "<<"\t";
		}
		if(i==0)
			{
				int k=0;
				while(k<N/2)
				{cout<<"*"<<"\t";
				k++;
				}
			}
		else
			{
				for(int j=0 ; j<=(N/2)-i ; j++)
				{
				cout<<"*"<<"\t";
				}
			}
		
	cout<<"\n";
	}
	for(int i=N/2 ; i>=0 ; i--)
	{
		if(i==2)
		{
			continue;
		}
		for(int j=0 ; j<=(N/2)-i ; j++)
		{
			cout<<"*"<<"\t";
		}
		
		for(int j=0 ; j<2*i-1 ; j++)
		{
		cout<<" "<<"\t";
		}
		if(i==0)
			{
				int k=0;
				while(k<N/2)
				{cout<<"*"<<"\t";
				k++;
				}
			}
		else
			{
				for(int j=0 ; j<=(N/2)-i ; j++)
				{
				cout<<"*"<<"\t";
				}
			}
		
	cout<<endl;
	}
	return 0;
}