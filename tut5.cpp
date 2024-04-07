#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"18 years old";endl;
        break;
    case 16:
        cout<<"16 years old";endl;
        break;
    
    default:
        cout<<"Invalid age";endl;
        break;
    }
    return 0;
}