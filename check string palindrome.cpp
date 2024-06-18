#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    char a[]="naman";
    int i=0;
    int j=0;
    int temp=0;
    while(a[j]!='\0'){
        j++;
    }
    j--;
    while(i<=j){
        if(a[i]!=a[j]){
            temp=1;
        }
        i++;
        j--;
    }
    if(temp){
        cout<<"Not palindrome";
    }
    else{
        cout<<"Palindrome";
    }
    return 0;
}