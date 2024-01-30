#include<conio.h>
#include<iostream.h>
int Fact(int n)
{
if(n==1)
{
return 1;
}
else
{
return n*Fact(n-1);
}
}
void main()
{
int x;
clrscr();
cout<<"Enter num to find factorial: "<<endl;
cin>>x;
cout<<"Factorial of "<<x<<" is: "<<Fact(x)<<endl;
getch();
}