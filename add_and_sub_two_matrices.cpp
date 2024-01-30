//13. addition & substeraction of 2 matrices.
#include<iostream>
using namespace std;
int main()
{
	int i,j,s=0;
	int a[2][2]={10,20,30,40};
   	int b[2][2]={50,60,70,80};
   int c[2][2];
   int d[2][2];
	cout<<"Matrix A is:"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<a[i][j]<<" ";
		}
	    cout<<endl;
	}
    cout<<endl;
    	cout<<"Matrix B is:"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<b[i][j]<<" ";
		}
	    cout<<endl;
	}
    cout<<endl;
    	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=b[i][j]-a[i][j];
			d[i][j]=b[i][j]+a[i][j];
		}
	}
	
	cout<<"sum and sub matrices: "<<endl;
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<c[i][j]<<" ";
		}
	    cout<<endl;
	}
         cout<<endl;
         	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<d[i][j]<<" ";
		}
	    cout<<endl;
	}
		cout<<endl;
}
