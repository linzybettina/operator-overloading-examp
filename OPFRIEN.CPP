#include<iostream.h>
#include<conio.h>
class test2;
class test1
{
int a;
public:
void geta()
{
cout<<"Enter a value";
cin>>a;
}
friend void operator >(test1,test2)
};
class test2
{
int b;
public:
void getb()
{
cout<<"Enter b value:";
cin>>b;
}
friend void operator >(test1,test2)
};
void operator >(test1 t1,test2 t2)
{
t1.a>t2.b?cout<<"a is Big":cout<<"b is Big";
}
void main()
{
test1 t1;
test2 t2;
clrscr();
t1.geta();
t2.getb();
t1>t2;
getch();
}