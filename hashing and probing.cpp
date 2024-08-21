#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
using namespace std;
int bash(int key){
    return key%SIZE;
}
int probe(int h[],int key){
    int index=bash(key);
    int i=0;
    while(h[(index+i)%SIZE]!=0){
        i++;
    }
    return (index+i)%SIZE;
}
void insert(int h[],int key){
    int index=bash(key);
    if(h[index]!=0){
        index=probe(h,key);
    }
    h[index]=key;
}
int search(int h[],int key){
    int index=bash(key);
    int i=0;
    while(h[(index+i)%SIZE]!=key){
        i++;
    }
    return (index+i)%SIZE;
}
int main(){
    int h[10]={0};
    insert(h,12);
    insert(h,25);
    insert(h,35);
    insert(h,26);
    cout<<search(h,35);
    return 0;
}