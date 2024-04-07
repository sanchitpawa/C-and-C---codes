#include <stdio.h>
int main(){
	int m,n,i,j,k,l,p,ctr=0,ct=0;
	printf("Enter the order of matrix:");
	scanf("%d",&n);
	int arr[m][n];
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("Enter the value at index (%d,%d):",i,j);
			scanf("%d",&k);
			arr[j][i]=k;
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("%d ",arr[j][i]);
		}
		printf ("\n");
	}
	l=0;
	for (i=0;i<n;i++){
		for (j=i-1;j<i;j++){
			if(arr[j][i]!=0){
				l=1;
				ctr++;
			}
		}
	}
		//printf("\n");
	p=0;
	i=0;
	j=0;
	for (i=0;i<n;i++){
		for (j=i+1;j>i;j++){
			if (arr[j][i]!=0){
				p=1;
				if (l==1){
					printf("not triangular");
				}
				ct++;
			}
			else {
					printf("triangular");
				}
		}
	}
	return 0;
}