#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int p,r,t,SI;
cout<<"Enter principal amount: "<<endl;
cin>>p;
cout<<"Enter the Rate of intrest:"<<endl;
cin>>r;
cout<<"Enter time(in years): "<<endl;
cin>>t;
SI= (p*r*t)/100;
cout<<"Simple Intrest = "<<SI<<endl ;
getch();
}