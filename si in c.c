#include<stdio.h>
int main(){
	int a,b;
	float t,si;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter t:");
	scanf("%f",&t);
	si=(a*b*t)/100.00;
	printf("Si is:%f",si);
	return 0;
}