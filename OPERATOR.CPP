#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct _string
{
char *str;
}string;
string operator+(const string &s1,const string &s2)
{
string s;
s.str=(char *)malloc(strlen(s1.str)+strlen(s2.str)+1);
strcpy(s.str,s1.str);
strcat(s.str,s2.str);
return s;
}
int main()
{
clrscr();
string fname,lname,name;
fname.str=strdup("sajan");
lname.str=strdup("kumar");
name=fname+lname;//operator overloading
cout<<"firstname:"<<fname.str<<endl;
cout<<"lastname:"<<lname.str<<endl;
cout<<"fullname:"<<name.str<<endl;
return 0;
}




