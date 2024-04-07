#include <iostream>
using namespace std;
int add(int a, int b){
	int c= a+b;
	return c;
}
int add(double a, int b){
	int c=a+b;
	return c;
}
int main(){
	int c=add(38.6789,2);
	cout<<c;
	return 0;
}