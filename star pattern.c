#include <stdio.h>
int main(){
	int n,m,i,j,k;
	printf("Enter the number of rows:");
	scanf("%d",&m);
	for (i=0;i<m;i++){
		for (j=0;j<i;j++){
			printf(" ");
		}
		for (k=m;k>i;k--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}