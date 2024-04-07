#include <stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int x,y,z;
	x=10;
	y=15;
	printf ("x=%d\ny=%d\n",x,y);
	swap(x,y);
	printf("x=%d\ny=%d",x,y);
	return 0;
}