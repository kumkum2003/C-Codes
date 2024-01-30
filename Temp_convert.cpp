#include<iostream>
using namespace std;
int main()
{
	float c,f;
	cout<<"Enter temp in fahrenhite: ";
	cin>>f;
	
	c=((f-32)*5)/9;
	cout<<"The temp in celsius is: "<<c<<endl;
	return 0 ;
}
