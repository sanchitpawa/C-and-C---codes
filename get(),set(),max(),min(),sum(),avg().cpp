#include<iostream>
#include<stdio.h>
using namespace std;
void get(int a[],int n,int i){
    if(i>n){
        cout<<"Invalid index"<<endl;
    }
    else{
        cout<<"The element is:"<<a[i]<<endl;
    }
}
void set(int a[],int i,int x){
    a[i]=x;
}
void max(int a[],int n){
    int temp=a[0];
    int i=1;
    while(i<=n){
        if(a[i]>temp){
            temp=a[i];
        }
        i++;
    }
    cout<<"max element is:"<<temp<<endl;
}
void min(int a[],int n){
    int i=1,temp=a[0];
    while(i<=n){
        if(a[i]<temp){
            temp=a[i];
        }
        i++;
    }
    cout<<"min element is:"<<temp<<endl;
}
float sum(int a[],int n){
    if(n>=0){
        return a[n]+sum(a,n-1);
    }
    return 0;
}
float avg(int a[],float n){
    float s=sum(a,n);
    return (s/n+1);
}
int main(){
    int arr[14]={12,3,2,1,23,32,21,43,6,7,34,31,30,25};
    get(arr,13,6);
    set(arr,8,13);
    max(arr,13);
    min(arr,13);
    cout<<"Sum is:"<<sum(arr,13)<<endl;
    cout<<"Average is:"<<avg(arr,13)<<endl;
    return 0;
}