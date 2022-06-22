#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    char str[50],st[5],r = '\0',l = '\0';
    int in=0;
    unsigned long len;
cout<<"Input the name";
cin>>str;
len= strlen (str);
cout<<len<<"\n";
while(in<len)
{if(isalpha(str[in]))
{
l=str[in];
in+=1;
int ind=0;
while(isdigit(str[in]))
{
st[ind]=str[in];
ind+=1;
in=in+1;
}
r=str[in];
}
cout<<"The numbers between" <<l<<"and"<<r<<"is"<<st<<"\n";
}
}
