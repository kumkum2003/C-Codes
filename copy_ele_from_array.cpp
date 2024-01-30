//3. WAP to copy all the elements of array in another array .
#include<iostream>
using namespace std;
int main()
{
	int i;
	int a[5]={10,20,30,40,50};
	int b[5];
	cout<<"Fist array:";
	for(i=0;i<5;i++)
	{
	    cout<<a[i]<<"  ";
	}
    cout<<endl;
	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}
	cout<<"Copied Array:";
	for(i=0;i<5;i++)
	{
	    cout<<b[i]<<"  ";
	}
    cout<<endl;
	
}
