#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the size of 1st array:";
    cin>>m;
    cout<<"Enter the size of 2nd array:";
    cin>>n;
    int a[m],b[n],c[m+n];
    cout<<"First Array\n";
    for (int i=0;i<m;i++){
        cout<<"Enter the element:";
        cin>>a[i];
    }
    cout<<"Second Array\n";
    for (int i=0;i<n;i++){
        cout<<"Enter the element:";
        cin>>b[i];
    }
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        if(b[j]<a[i]){
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<m){
        if(i==m-1){
            c[k]=a[i];
            i++;
            k++;
        }
        else{  
            c[k]=a[i]; 
            i++;
            k++;
        }
    }
    while(j<n){
        if(j==n-1){
            c[k]=b[j];
            j++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    for (int l=0;l<(m+n);l++){
        cout<<c[l]<<' ';
    }
    return 0;
}