#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	int A[7]={34,76,12,3,4,5,10};
	int i,temp,swapped=0;
	for (int k=0;k<7;k++){
		cout<<A[k]<<" ";
	};
	cout<<endl;
	for (i=0;i<7;i++){
		for (int j=0;j<7-i-1;j++){
			if (A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				swapped=1;
			};
		};
		if (swapped==0){
			break;
		};
	};
	for (i=0;i<7;i++){
		cout<<A[i]<<" ";
	};
	return 0;
};