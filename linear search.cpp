#include<iostream>
#include<stdio.h>
using namespace std;
int search(int a[],int N,int n){
    int i;
    for (i=0;i<N;i++){
        if (a[i]==n){
            return i;
        }
    }
    return -1;
}
int main(){
    int k;
    int A[6]={12,2,45,23,43,3};
    cout<<"Enter the required element:";
    cin>>k;
    cout<<"The required element is at ";
    cout<<search(A,6,k);
    return 0;
}