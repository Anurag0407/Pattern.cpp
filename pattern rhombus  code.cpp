#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
	int sc=1;
	while(sc<=(n-row)){
		cout<<" "<<'\t';
	sc=sc+1;

	}
	int ic=1;
	int sp=row;
	while(ic<=row){
		cout<<sp<<'\t';
		sp=sp+1;
		ic=ic+1;
	}
	int dc=1;
	int stp=(2*row)-2;
	while(dc<=row-1){

		cout<<stp<<'\t';
		stp=stp-1;
		dc=dc+1;
	}


	cout<<endl;
	row=row+1;
	}
	int rn=1;

	while(rn<=n-1){
	int counter=1;
	while(counter<=rn){
		cout<<" "<<'\t';
		counter=counter+1;
	}
	int inccounter=1;
	int stpri=(n-rn);
	while(inccounter<=(n-rn)){
		cout<<stpri<<'\t';
		stpri=stpri+1;

		inccounter=inccounter+1; 
	}
	int deccounter=1;
	int decnums=2*(n-rn-1);
	while(deccounter<=(n-rn-1)){
		cout<<decnums<<'\t';
		decnums=decnums-1;
		deccounter=deccounter+1;
	}
	cout<<endl;
	rn=rn+1;
	}
	cout<<endl;
return 0;
} 
