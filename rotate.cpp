//6. How do you rotate an array?
#include<iostream>
using namespace std;
int main(){
	int x[]={10,20,30,40,50};
	int n=sizeof(x)/sizeof(x[0]);
	int y[n];
	int d;
	cout<<"Enter d:";
	cin>>d;
	int k=0;
	for(int i=d;i<n;i++){
		y[k++]=x[i];
	}
	for(int i=0;i<d;i++){
		y[k++]=x[i];
	}
	for(int i=0;i<n;i++){
		cout<<y[i]<<" ";
	}
}
