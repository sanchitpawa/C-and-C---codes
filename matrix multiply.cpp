#include<iostream>
using namespace std;
int main(){
	int i,j,n,m,q,k=0,sum=0,f,y;
    cout<<"Enter the order of square matrix:";
    cin>>y;
    int arr[y][y],a[y][y],b[y][y],c[y][y];
    for (i=0;i<y;i++){
        for (j=0;j<y;j++){
        	cout<<"Enter number:";
            cin>>n;
            arr[i][j]=n;
			}
	}
	cout<<"2nd array"<<endl;
	for (i=0;i<y;i++){
        for (j=0;j<y;j++){
        	cout<<"Enter number:";
            cin>>m;
            a[i][j]=m;
        }
    }
	for (i=0;i<y;i++){
		for (j=0;j<y;j++){
			b[i][j]=a[j][i];
			//cout<<b[i][j]<<" ";
		}
		//cout<<endl;
	}
	for (i=0;i<y;i++){
		for (j=0;j<y;j++){
			for (q=0;q<y;q++){
				f=arr[i][q]*b[j][q];
				sum=sum+f;
			}
			c[i][j]=sum;
			cout<<c[i][j]<<" ";
			sum=0;
		}
	cout<<endl;
	}
	//cout<<b;
    return 0;
}