#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int num, remainder,ctr=0;
    int digits;
    int i=0;
    int j;
    char a[10][7]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    int arr[100];

    cout<<"Enter the no:";
	cin>>num;

    while (num!=0 && i<100)
    {
        arr[i]= num%10;
        num = num/10;
        i++;
    }
    cout<<"The digits are: \n";
    for (int j = i - 1; j >= 0; j--) {
    	cout<<a[arr[j]]<<" ";
    }
}