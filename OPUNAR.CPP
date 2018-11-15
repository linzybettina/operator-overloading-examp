#include<iostream.h>
#include<conio.h>
class test
{
int a;
public:
test()
{
a=0;
}
void operator ++()
{
a++;
}
void operator --()
{
a--;
}
void show()
{
cout<<"A :"<<a<<endl;
}
};
void main()
{
test t;
clrscr();
t++;
t.show();
t--;
t.show();
getch()
}