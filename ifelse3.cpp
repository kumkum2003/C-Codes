#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"Enter character: \n";
	cin>>ch;
	int ascii= ch;
	
	if(ascii>=97&&ascii<=122)
	{
		cout<<"lowercase";
	}
	else if(ascii>=65&&ascii<=90)
	{
		cout<<"Uppercase";
		
	}
	else if(ascii>=48&&ascii<=57)
	{
		cout<<"Numeric";
	}
	else
	{
		cout<<"Something else.";
	}
	return 0;
}
