#include <iostream>
using namespace std;
int main(){
	int i,j,k,n,g,p,q;
	cout<<"Enter the number of rows:";
	cin>>n;
	for (i=1;i<n+1;i++){
		for (j=n;j>=i;j--){
			cout<<" ";
		}
		for (k=1;k<=i;k++){
			cout<<"*";
		}
		for (g=1;g<i;g++){
			cout<<"*";
		}
		cout<<endl;
	}
	for (i=1;i<n+1;i++){
		for (j=1;j<=i;j++){
			cout<<" ";
		}
		for (k=n;k>=i;k--){
			cout<<"*";
		}
		for (g=n;g>i;g--){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}