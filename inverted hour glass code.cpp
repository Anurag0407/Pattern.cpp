#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int rown=1;
	int inc,dec ,spc,num,num2,num3,num4,inc1,dec1,spc1;
	while(rown<=n){
		num=n;
		dec=1;
		while(dec<=rown){
			cout<<num<<'\t';
			num=num-1;
			dec=dec+1;
		}
		spc=1;
		while(spc<=(3*n)-(2*rown)-4){
			cout<<'\t';
			spc=spc+1;
		}
		inc=1;
		num2=num+1;
		while(inc<=rown){
			cout<<num2<<'\t';
			num2=num2+1;
			inc=inc+1;
		}
		cout<<endl;
		rown=rown+1;
	}
	num3=n;
	dec1=1;
	while(dec1<=n+1){
		cout<<num3<<'\t';
		num3=num3-1;
		dec1=dec1+1;
	}
	num4=1;
	inc1=1;
	while(inc1<=n){
		cout<<num4<<'\t';
		num4=num4+1;
		inc1=inc1+1;
	}
	cout<<endl;
    int rowm=n;
	int num5,dec2,inc2,spc2,num6;
	while(rowm>0){
		dec2=1;
		num5=n;
		while(dec2<=rowm){
			cout<<num5<<'\t';
			num5=num5-1;
			dec2=dec2+1;	
		}
		spc2=1;
		while(spc2<=(3*n)-(2*rowm)-4){
			cout<<'\t';
			spc2=spc2+1;
		}
		num6=num5+1;
		inc2=1;
		while(inc2<=rowm){
			cout<<num6<<'\t';
			num6=num6+1;
			inc2=inc2+1;

		}
		cout<<endl;
		rowm=rowm-1;
	}

	return 0;
}