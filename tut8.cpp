#include<iostream>
using namespace std;
int main(){
	int n,i,x=0;
	double sum=0.00,a,b;
	cout<<"Enter the range:";
	cin>>n;
	for (i=1;i<n;i++){
		a=2*i-1;
		b=2*i;
		sum=sum+(a/b);
		x++;
	}
	cout<<sum;
	cout<<endl;
	cout<<x;
}