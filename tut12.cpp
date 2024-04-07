#include <stdio.h>
#include <iostream>
using namespace std;
int st(string *p,string s){
	int length=sizeof(s)/sizeof(char);
	for (int i=0;i<length;i++){
		string temp=p[i];
		p[i]=p[length-i];
		p[length-i]=temp;
	};
	return length;
};
int main(){
	string d="hello";
	cout<<st(&d,d);
	cout<<d;
	return 0;
}