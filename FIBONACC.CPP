#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int a=-1;
int b=1;
int c,n,i;
cout<<"Enter num for fibonacci Series: "<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
c=a+b;
cout<<c<<endl;
a=b;
b=c;
}
getch();
}