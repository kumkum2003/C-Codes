#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int x,i;
int s=0;
cout<<"Enter num"<<endl;
cin>>x;
for(i=1;i<x;i++)
{
if(x%i==0)
{
s=s+i;
}
}
if(x==s)
{
cout<<"Perfect num"<<endl;
}
else
{
cout<<"Not perfect num"<<endl;
}
getch();
}