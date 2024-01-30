//11. Write a program to read and dispaly matrix.
#include<iostream>
using namespace std;
int main()
{
	int i,j,x,y;
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
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cout<<a[i][j]<<" ";
		}
	    cout<<endl;
	}
    cout<<endl;
  
	
}
