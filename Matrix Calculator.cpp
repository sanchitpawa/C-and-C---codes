#include <stdio.h>
#include<iostream>
using namespace std;
int main(){
	int i,j,n,m,q,k=0,sum=0,f,y,p;
    printf("Enter the order of square matrix:");
    scanf("%d",&y);
    int arr[y][y],a[y][y],b[y][y],c[y][y],d[y][y],e[y][y];
    for (i=0;i<y;i++){
        for (j=0;j<y;j++){
        	printf("Enter number:");
            scanf("%d",&n);
            arr[i][j]=n;
			}
	}
	printf("2nd matrix:\n");
	for (i=0;i<y;i++){
        for (j=0;j<y;j++){
        	printf("Enter number:");
            scanf("%d",&m);
            a[i][j]=m;
        }
    }
	printf("First Matrix:\n");
	for (i=0;i<y;i++){
		for (j=0;j<y;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("Second Matrix:\n");
	for (i=0;i<y;i++){
		for (j=0;j<y;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	while(y>0){
		printf("1. Add the matrices.\n2. Subtract the matrices.\n3. Multiply the matrices\n4. Quit\nEnter your choice:");
		scanf("%d",&p);
		if (p==1){
			printf("Sum matrix is:\n");
			for(i=0;i<y;i++){
				for (j=0;j<y;j++){
					d[i][j]=arr[i][j]+a[i][j];
					printf("%d ",d[i][j]);
				}
				printf("\n");
			}
		}
		else if(p==2){
			printf("Difference matrix is:\n");
			for (i=0;i<y;i++){
				for(j=0;j<y;j++){
					e[i][j]=arr[i][j]-a[i][j];
					printf("%d ",e[i][j]);
				}
				printf("\n");
			}
		}
		else if (p==3){
			printf("Multiply is:\n");
			for (i=0;i<y;i++){
				for (j=0;j<y;j++){
					for (q=0;q<y;q++){
						f=arr[i][q]*a[q][j];
						sum=sum+f;
					}
					c[i][j]=sum;
					printf("%d ",c[i][j]);
					sum=0;
				}
			printf("\n");
			}
		}
		else if(p==4){
			printf("Thank You :)");
			break;
		}
	}
    return 0;
}