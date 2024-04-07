#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //Manipulators in C++
    /*int a=2,b=34,c=4678;
    cout<<"The value of a without setw is:"<<a<<endl;
    cout<<"The value of b without setw is:"<<b<<endl;
    cout<<"The value of c without setw is:"<<c<<endl;
    cout<<endl;
    cout<<"The value of a with setw is:"<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is:"<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is:"<<setw(4)<<c<<endl;
    return 0;*/


    //Operator precendence
    int a=4,b=5;
    int c=a*b-55+b-43+a;
    cout<<c;
    return 0;
    //c=((((a*b)-55)+b)-43)+a

    //visit en.cppreference.com for operator precedene and associativty
}