#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void bubblesort(int A[],int n){
    int i,temp,swapped=0;
	for (i=0;i<n;i++){
		for (int j=0;j<n-i-1;j++){
			if (A[j]>A[j+1]){
				swap(A[j],A[j+1]);
				swapped=1;
			}
		}
		if (swapped==0){
			break;
		}
	}
}
void selectionsort(int a[],int n){
    int swapped=0,min=0;
    for (int i=0;i<n;i++){
        min=i;
        for (int j=i+1;j<n-1;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if (min!=i){
            swap(a[min],a[i]);
        }
    }
}
void insertionsort(int a[],int n){
    int i,j,temp;
    for (i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while (j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    int j=high;
    for(j=low;j<high;j++){
        if(arr[j]<arr[high]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quicksort(int arr[],int low,int high){
    if (low<high){
        int partitionindex=partition(arr,low,high);

        quicksort(arr,low,partitionindex-1);
        quicksort(arr,partitionindex+1,high);
        }
}
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
//Count Sort is useful when array has repeated numbers and the numbers are small. In this case numbers should be below 20.
void countsort(int a[],int n){
    int i=0,max=0;
    int out[n];
    for (i;i<n-1;i++){
        if(a[i]<a[i+1]){
            max=a[i+1];
        }
    }
    int count[20]={0};
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    for(int i=1;i<n;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        out[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
    for(int i=0;i<n;i++){
        a[i]=out[i];
    }
}
void printarray(int a[],int n){
    for (int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
}
int main(){
    int a[]={1,2,3,1,4,3,2,5};
    int n=8;
    //bubblesort(a,8);
    //selectionsort(a,n);
    countsort(a,n);
    printarray(a,8);
    return 0;
}