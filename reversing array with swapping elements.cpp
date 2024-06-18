#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int arr[7]={3,2,4,5,2,5,6};
    cout<<"Array before"<<endl;
    for (int i=0;i<7;i++){
        cout<<arr[i]<<' ';
    }
    int i=0;
    int j=6;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<endl;
    cout<<"Swapped Array"<<endl;
        for (int i=0;i<7;i++){
            cout<<arr[i]<<' ';
        }
    return 0;
}