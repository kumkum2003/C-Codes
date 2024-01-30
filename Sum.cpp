//2. WAP to display sum of all the elements in array.
#include<iostream>
#include<conio.h>
int main()
{
	int i,s=0;
	int a[5]={10,20,30,40,50};
	for(i=0;i<5;i++)
	{
	    std ::cout<<a[i]<<"  ";
	}
	std::cout<<std::endl;
	for(i=0;i<5;i++)
	{
		s=s+a[i];
	}
	std::cout<<s<<std::endl;
	
}
