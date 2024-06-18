#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    char a[]="Painter";
    char b[]="Painting";
    int i=0;
    int j=0;
    while(a[i]!='\0'&& b[j]!='\0'){
        if(a[i]!=b[j]){
            break;
        }
        i++;
        j++;
    }
    if(a[i]==b[j]){
        cout<<"Equal";
    }
    else if(a[i]<b[j]){
        cout<<"Less";
    }
    else{
        cout<<"Greater";
    }
    return 0;
}