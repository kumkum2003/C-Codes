//5. WAP to copy all the elements of array in another array in reverse Order.
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
		b[4-i]=a[i];
	}
	cout<<"Reversed Array:";
	for(i=0;i<5;i++)
	{
	    cout<<b[i]<<"  ";
	}
    cout<<endl;
	
}
