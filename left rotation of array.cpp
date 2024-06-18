#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int arr[8]={6,3,4,2,5,7,1,9};
    int n,j,temp;
    cout<<"Enter the number of shifts:";
    cin>>n;
    for (int i=0;i<n;i++){
        temp=arr[0];
        for (j=0;j<7;j++){
            arr[j]=arr[j+1];
            if(j==6){
                arr[j+1]=temp;
            }
        }
    }
        for (int i=0;i<8;i++){
            cout<<arr[i]<<' ';
        }
    return 0;
}