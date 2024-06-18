#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int arr[8]={8,2,3,1,5,6,7,4};    
    int k,n=8,i,j;
    cout<<"Enter the sum you want:";
    cin>>k;
    for(i=0;i<n;i++){
        if(arr[i]<k){
            for (j=i;j<n;j++){
                if(j==i){
                    continue;
                }
                else{
                    int p=arr[j]+arr[i];
                    if(p==k){
                        printf("%d,%d\n",arr[i],arr[j]);
                    }
                }
            }
        }
    }
    return 0;
}