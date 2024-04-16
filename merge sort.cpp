#include<iostream>
#include<stdio.h>
using namespace std;
void merge(int arr[],int l,int m, int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for ( i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for (j=0;j<n2;j++){
        R[j]=arr[m+1+j];
    }
    i=j=0;
    k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main(){
    int a[7]={134,54,63,23,73,94,10};
    for (int i=0;i<7;i++){
        cout<<a[i]<<" ";        
    }
    mergesort(a,0,6);
    cout<<endl;
    for (int j=0;j<7;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}