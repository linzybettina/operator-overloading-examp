#include<iostream.h>
#include<conio.h>
class test
{
int a;
public:
void get()
{
cin>>a;
}
void operator ==(test t2)
{
if(a==t2.a)
cout<<"objects are equal";
else
cout<<"objects are not equal";
}
};
void main()
{
test t1,t2;
clrscr();
cout<<"Enter t1 object A value";
t1.get();
cout<<"Ehter t2 object A value";
t2.get();
t1==t2;
getch();
}