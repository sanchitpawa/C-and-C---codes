#include<iostream>
#include<math.h>
#define pi 3.141592653589793238462643383279502884197
using namespace std;
int main(){
	double i,j,k,m,ctr,n,l;
	double sum,g,h,w,x,p;
	cout<<"Enter the value of x:";
	cin>>x;
	p=x*pi/180;
	sum=0;
	m=1;
	ctr=0;
	for (i=1,j=0;i<200,j<100;){
		for (k=1;k<=i;k++){
			m=m*k;
		}
		n=pow(-1,j);
		h=pow(p,i);
		w=h/m;
		g=n*w;
		sum=sum+g;
		ctr=ctr+1;
		i=i+2;
		j++;
		l=pow(10,(-5));
		if (w<l){
			break;
		}
	}
	cout<<"The value of Sin "<<x<<" is "<<sum<<endl<<"no of iterations is "<<ctr;
	return 0;
}