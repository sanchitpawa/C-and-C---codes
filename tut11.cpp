#include <iostream>
using namespace std;
int main(){
	int n,i=0,j=0,sum=1,temp,t1=0,t2=1;
	cout<<"Enter the no:";
	cin>>n;
	sum=t1+t2;
	while (sum<=n){
		if (sum==n){
			cout<<"yes";
			break;
		}
		else if(t1==n){
			cout<<"yes";
			break;
		}
		else{
		t1=t2;
		t2=sum;
		sum=t1+t2;
	}
	cout<<sum;
	}
	return 0;
}