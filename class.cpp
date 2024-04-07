#include <stdio.h>
#include <iostream>
using namespace std;
class Rectangle{
	public:
	int length;
	int breadth;
	void initialize(int l,int b){
		length=l;
		breadth=b;
	}
	int area(){
		return length*breadth;
	};
	int perimeter(){
		return 2*(length+breadth);
	};
};
int main(){
	int l,b;
	Rectangle r;
	printf("Enter the length and breadth\n");
	cin>>l>>b;
	r.initialize(l,b);
	int a=r.area();
	int p=r.perimeter();
	printf("area and perimeter is %d,%d",a,p);
	return 0;
}