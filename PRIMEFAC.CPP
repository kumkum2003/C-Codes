#include<iostream.h>
#include<conio.h>
int Prime(int n)
{
int i,c=1;
for(i=2;i<n;i++)
{
if(n%i==0)
{
c=0;
}
else
{
c=1;
}
return c;
}
}
void main()
{
clrscr();
int x,i;
cout<<"Enter num"<<endl;
cin>>x;
for(i=1;i<x;i++)
{
if(x%i==0)
{
if(Prime(i))
{
cout<<i<<endl;
}
}
}

getch();
}