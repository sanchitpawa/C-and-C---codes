#include<iostream>
using namespace std;
int main(){
	int n,i,a;
	int j;
	cout<<"Enter the no:";
	cin>>n;
	for (j=3;j<n;j++){
		for (i=2;i<j;i++){
			a=j%i;
			if (a==0){
				break;
			}
			else if(i==j-1 && a!=0){
				cout<<j;
				cout<<endl;
			}
		}
		}
		//cout<<"prime";
	//cout<<n%2;
	return 0;
}