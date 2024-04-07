#include <iostream>
#include <stdio.h>
using namespace std;
template<class T>
class Rectangle {
    public:
    T length;
    T breadth;
    void assign(T a,T b){
        length=a;
        breadth=b;
    }
    T area(){
        return length*breadth;
    }
    void setlength(T l){
        length=l;
    }
    void setbreadth(T d){
        breadth=d;
    }
    void getdimensions(){
        cout<<"length is "<<length<<endl<<"breadth is "<<breadth;
    }
};
int main(){
    Rectangle<float> R;
    R.assign(10.1,3.0);
    R.getdimensions();
    cout<<endl;
    cout<<R.area()<<endl;
    R.setlength(4);
    cout<<R.area();
};