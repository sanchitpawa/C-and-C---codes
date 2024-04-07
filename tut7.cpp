#include<iostream>
using namespace std;
int main(){
	int n,i,j,a,ctr=0;
	cout<<"Enter the no:";
	cin>>n;
	string y=to_string(n);
	a=y.length();
	int arr[a]={n};
	for (i=0;i<a;i++){
		cout<<arr[i];
		ctr=ctr+1;
	}
	cout<<endl;
	cout<<ctr;
	cout<<endl;
	//cout<<arr[];
}