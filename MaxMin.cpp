//7. Find the minimum and maximum element in an array
#include<iostream>
using namespace std;
int main()
{
	int i;
	int a[5]={10,20,30,40,50};
	int x=a[0];
	int y=a[0];
	cout<<"Given array:";
	for(i=0;i<5;i++)
	{
	    cout<<a[i]<<"  ";
	}
    cout<<endl;
	for(i=0;i<5;i++)
	{
		if(a[i]>x)
		{
			x=a[i];
		}
		if(a[i]<y)
		{
			y=a[i];
		}
	}
	cout<<"Max Element: "<<x<<endl;
    cout<<"Min Element: "<<<<endl;
    cout<<endl;
	
}
