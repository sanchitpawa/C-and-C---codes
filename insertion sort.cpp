#include<iostream>
#include<stdio.h>
using namespace std;
void sort(int a[],int n){
    int i,j,temp;
    for (i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while (j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}
int main(){
    int A[6]={12,34,2,3,45,23};
    for (int i=0;i<6;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    sort(A,6);
    for (int j=0;j<6;j++){
        cout<<A[j]<<" ";
    }
    return 0;
}