//Array should be sorted for binary search!!!
#include<iostream>
#include<stdio.h>
using namespace std;
int search(int a[],int N,int n){
    int l=0;
    int r=N-1;
    while (l<=r){
        int m=l+(r-1)/2;
        if (a[m]==n){
            return m;
        }
        if (a[m]<n){
            l=m+1;
        }
        else {
            r=m-1;
        }
    }
    return -1;
}
int main(){
    int A[6]={1,2,3,4,5,6};
    cout<<search(A,6,2);
    return 0;
}