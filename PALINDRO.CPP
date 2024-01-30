#include<conio.h>
#include<iostream.h>
int Palindrome(int n)
{
int i,a,s=0;
int n1=n;
while(n!=0)
{
a=n%10;
s=(s*10)+a;
n=n/10;
}
if(s==n1)
{
cout<<" Palindrome"<<endl;
}
else
{
cout<<"Not Palindrome"<<endl;
}
}
void main()
{
clrscr();
int n;
cout<<"Enter number"<<endl;
cin>>n;
Palindrome(n);
getch();
}