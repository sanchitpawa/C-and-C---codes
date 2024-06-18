#include<iostream>
#include<stdio.h>
using namespace std;
void insert(int a[],int h,int x){
    int i=h;
    while(a[i]>x){
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=x;
}
int checksort(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            return -1;
        }
    }
    return 1;
}
void filter(int a[],int n){
    int swapped;
    for(int i=0;i<n;i++){
        swapped=0;
        for(int j=i+1;j<n;j++){
            if(a[j]<0){
                swap(a[j],a[i]);
                swapped=1;
                break;
            }
        }
        if(swapped==0){
            break;
        }
    }
}
int main(){
    int arr[9]={-6,-4,4,-5,6,-1,8,12,9};
    int n;
    cout<<"Enter the element:";
    cin>>n;
    insert(arr,7,n);
        for (int i=0;i<9;i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    int h=checksort(arr,8);
    if(h==-1){
        cout<<"Not sorted";
    }
    if(h==1){
        cout<<"Sorted";
    }
    cout<<endl;
    filter(arr,9);
    for (int i=0;i<9;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}