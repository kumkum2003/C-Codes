#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Enter a,b,c: ";
	cin>>a>>b>>c;
	cout<<"\nChecking if a triangle is valid.";
	
	if((a+b)>c && (b+c)>a && (c+a)>b)
	{
		cout<<"\nTriangle is valid";
	}
	else
	{
		cout<<"\ntriangle is invalid";
	}
}
