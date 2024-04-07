#include <stdio.h>
#include <iostream>
using namespace std;
long int sum(int n){
	if (n<=1){
		return 1;
	};
	return n+sum(n-1);
}
int main(){
	long int s;
	int n;
	s=sum(7);
	cout<<s;
	return 0;
}