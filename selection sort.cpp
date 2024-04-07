#include<iostream>
#include<stdio.h>
using namespace std;
void sort(int a[],int n){
    int swapped=0;
    for (int i=0;i<n;i++){
        for (int j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
                swapped=1;
            }
        }
        if (swapped==0){
            break;
        }
    }
}
int main(){
    int A[6]={12,32,2,45,23,56};
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