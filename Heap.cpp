#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void insertmax(int a[],int n){
    int temp,i=n;
    temp=a[n];
    while(i>1 && temp>a[i/2]){
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=temp;
}
void insertmin(int a[],int n){
    int temp,i=n;
    temp=a[n];
    while(i>1 && temp<a[i/2]){
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=temp;
}
void createheap(){
    int a[]={0,30,12,32,20,14,18,22};
    for(int i=2;i<=7;i++){
        insertmax(a,i);
    }
}
void deleteheap(int a[],int n){
    int x,i,j;
    x=a[1];
    a[1]=a[n];
    a[n]=x;
    i=1;
    j=2*i;
    while(j<n-1){
        if(a[j+1]>a[j]){
            j=j+1;
        }
        if(a[i]<a[j]){
            swap(a[i],a[j]);
            i=j;
            j=2*j;
        }
        else{
            break;
        }
        a[n]=x;
    }
}
void heapsort(int a[],int n){
    for(int i=n;i>1;i--){
        deleteheap(a,i);
    }
}
void heapify(int a[],int n){
    for (int i=(n/2)-1;i>=0;i--){
        int j=2*i + 1;
        while(j<n-1){
            if(a[j]<a[j+1]){
                j=j+1;
            }
            if(a[i]<a[j]){
                swap(a[i],a[j]);
                i=j;
                j=2*i+1;
            }
            else{
                break;
            }
        }
    }
}
int main(){
    createheap();
    return 0;
}