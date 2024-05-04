#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6};
    int n,k,i=5;
    printf("Enter the index at which you want to enter element:");
    scanf("%d",&n);
    printf("Enter the element:");
    scanf("%d",&k);
    while(i!=n-1){
        swap(arr[i+1],arr[i]);
        i--;
    }
    arr[n]=k;
        for (int i=0;i<7;i++){
            cout<<arr[i]<<' ';
        }
    return 0;
}