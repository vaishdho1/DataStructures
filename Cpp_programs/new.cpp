#include<iostream>
using namespace std;
int *lar(int *arr,int size);
int main()
{
int arr[50];
int len,i;
cout<<"Input length";
cin>>len;
cout<<"Input elements";
for(i=0;i<len;i++)
{
cin>>arr[i];
}
lar(arr,len);

}
int *lar(int *arr,int len)
{int *l;
int *m;
l=arr;
m=arr[1];
int f=0;
int j,r,b[100],i;
while(f<len-2)
{
l=l+1;
while(l<len-1)
{
p=*l-*arr;
m=m+1;
j=2;
while(m<len)
{
q=*m-*l;
if(p==q)
{j=j+1;
m=m+1;
l=l+1;
}
else
m=m+1;
}
b[r++]=j;
l=l+1;
}
arr=arr+1;
}
for(i=0;i<r;i++)
cout<<b[i]<<"";	
	
}
