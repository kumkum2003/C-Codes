#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n;
int k=0;

cout<<"Enter num of rows: "<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
k++;
cout<<k<<" ";
}
cout<<endl;
}
getch();
}