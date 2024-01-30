#include<iostream.h>
#include<conio.h>

int fact(int n)
{

}
int Seprate(int n)
{
int a;
int n1=n;
while(n!=0)
{
a=n%10;
cout<<a<<endl;
n=n/10;
}
}
void main()
{
clrscr();
int n;
cout<<"Enter num to check."<<endl;
cin>>n;
Seprate(n);
getch();
}
