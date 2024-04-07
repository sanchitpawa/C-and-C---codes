#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,x,y;
	printf("Enter the coeff of x^2:");
	scanf("%f",&a);
	printf("Enter the coeff of x:");
	scanf("%f",&b);
	printf("Enter the constant:");
	scanf("%f",&c);
	d=sqrt((b*b)-4*a*c);
	x=((-b+d)/(2*a));
	y=((-b-d)/(2*a));
	printf("The roots of the eqn are %f and %f",x,y);
	return 0;
}