#include<iostream>
#include<stdio.h>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while (i<j){
        while (arr[i]<=pivot && i<=high-1){
            i++;
        }
        while (arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int arr[],int low,int high){
    if (low<high){
        int partitionindex=partition(arr,low,high);

        quicksort(arr,low,partitionindex-1);
        quicksort(arr,partitionindex+1,high);
        }
}
int main(){
    int a[7]={134,54,63,23,73,94,10};
    for (int i=0;i<7;i++){
        cout<<a[i]<<" ";        
    }
    quicksort(a,0,6);
    cout<<endl;
    for (int j=0;j<7;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}