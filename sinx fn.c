#include<stdio.h>
#include<math.h>
int main(){
	int i,j,k,m,ctr,n,l;
	float sum,g,h,w,x;
	printf("Enter the value of x:");
	scanf("%d",&x);
	sum=0;
	m=1;
	ctr=0;
	for (i=1,j=0;i<200,j<100;){
		for (k=1;k<=i;k++){
			m=m*k;
		}
		n=pow(-1,j);
		h=pow(x,i);
		w=h/m;
		g=n*w;
		sum=sum+g;
		ctr=ctr+1;
		i=i+2;
		j++;
		l=pow(10,(-5));
		if (sum<l){
			break;
		}
	}
	printf("The value of Sin%d is %f\nThe number of iterations is %d",x,sum,ctr);
	return 0;
}