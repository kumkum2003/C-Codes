//12. sum of all the elements in 2d array or matrics
#include<iostream>
using namespace std;
int main()
{
	int i,j,x,y,s=0;
	cout<<"ENter rows: ";
	cin>>x;
	cout<<"ENter columns: ";
	cin>>y;
	int a[x][y];
	cout<<"Enter elements.";
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cin>>a[i][j];
		}
	}
    cout<<endl;
	cout<<"Matrix is:"<<endl;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cout<<a[i][j]<<" ";
		}
	    cout<<endl;
	}
    cout<<endl;
    	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			s=s+a[i][j];
		}
	}
         cout<<endl;
		cout<<"Sum  is:"<<s<<endl;
}
