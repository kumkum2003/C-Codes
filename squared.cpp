//14. wap to print square of each element of the 2d array or  matrices
#include<iostream>
using namespace std;
int main()
{
int i,j,s=0;
	int a[2][2]={10,20,30,40};
	cout<<"Matrix  is:"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<a[i][j]<<" ";
		}
	    cout<<endl;
	}
    cout<<endl;
	cout<<" Squared Matrix is:"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<(a[i][j])*(a[i][j])<<" ";
		}
	    cout<<endl;
	}
    cout<<endl;
    	
}
