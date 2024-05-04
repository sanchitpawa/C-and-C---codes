#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    int *A[3];
    A[0]=(int *)malloc(4*sizeof(int));
    A[1]=(int *)malloc(4*sizeof(int));
    A[2]=(int *)malloc(4*sizeof(int));
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("Enter the number:");
            cin>>A[i][j];
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cout<<A[i][j]<<' ';
        }
        cout<<endl;
    }
    int **B;
    B=(int **)malloc(3*sizeof(int *));
    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("Enter the number:");
            cin>>B[i][j];
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cout<<B[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}