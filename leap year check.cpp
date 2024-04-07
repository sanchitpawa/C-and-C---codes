#include <iostream>
using namespace std;
int main(){
	int n,i,j,m;
	cout<<"Enter the 1st year:";
	cin>>n;
	cout<<"Enter the 2nd year:";
	cin>>m;
	for (i=n;i<=m;i++)
	if (i%4==0){
		cout<<i<<"  ";
	}
	return 0;
}