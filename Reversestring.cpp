//15. Reverse string. Hello ->olleh
#include<iostream>
using namespace std;
int main()
{
	int i;
	char s[]="Hello";
	cout<<s<<endl;
	int n =sizeof(s)/sizeof(s[0]);
	for(i=n-1;i>=0;i--)
	{
	cout<<s[i];	
	}
}
