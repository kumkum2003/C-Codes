//4. WAP to count total number of duplicate in an Array.'
#include<iostream>
using namespace std;
int main(){
	int c=0;
	int x[]={10,30,40,460,203,20,30,45,40,30,460,10};
	int n=sizeof(x)/sizeof(x[0]);
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(x[i]==x[j]){
				c++;
				break;
			}
		}
	}
	cout<<"count="<<c<<endl;
}
