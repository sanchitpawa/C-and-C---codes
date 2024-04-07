#include <stdio.h>
#include <stdlib.h>
#include <iostream>
struct Rectangle{
		int length;
		int breadth;
	};
	
int main(){
	
	struct Rectangle *p;
	
	p=new Rectangle;
	
	p->breadth=15;
	p->length=7;
	
	printf("%d",p->length);
	
	delete p;
	return 0;
}