#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int N,rem,p;
    cin>>N;
	long long int c=N;
    long long int sum=0;
    long long int digits=0;
    long long int b=N;
    while(c!=0){
        p=c%10;
        digits=digits+1;
        c=c/10;
    }
    while(b!=0){
        rem=b%10;
        sum=sum+pow(rem,digits);
        b=b/10;
    }
    if(N==sum){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}