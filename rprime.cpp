#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the number.";
	cin>>a;
	int temp;
	for(int i=2;i<a;i++)
	{
	
	if(a%i==0)
	{
		temp=1;
	}
    }

	if(temp==1)
	{
		cout<<"Number is not prime.";
	}
	else
	{
		cout<<" prime no.";
	}

	return 0 ;
}
