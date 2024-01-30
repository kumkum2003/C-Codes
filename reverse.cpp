//1. WAP to display reverse all elements of array.
#include<iostream>
#include<conio.h>
int main()
{
	int i;
	int a[5]={10,20,30,40,50};
	for(i=0;i<5;i++)
	{
		std::cout<<a[i]<<"  ";
	}
	std::cout<<std::endl;
	for(i=4;i>=0;i--)
	{
	    std ::cout<<a[i]<<"  ";
	}
}
