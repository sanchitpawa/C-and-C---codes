//Array should be sorted for binary search!!!
#include<iostream>
#include<stdio.h>
using namespace std;
int search(int a[],int N,int g){
    int l=0;
    int r=N-1;
    while (l<=r){
        int m=l+(r-1)/2;
        if (a[m]==g){
            return m;
        }
        if (a[m]<g){
            l=m+1;
        }
        else {
            r=m-1;
        }
    }
    return -1;
}
int main(){
    int A[14]={1,2,3,4,5,6,7,8,9,12,13,14,15,16};
    cout<<search(A,14,9);
    return 0;
}