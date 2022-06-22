#include<iostream>
#include<math.h>
int main()
{using namespace std;
int v[10],i,x;
cout<<"Input the value of x \n";
cin>>x;
int a[5]={2,3,4,1,6};
i=1;
while(i<5)
{
v[0]=a[0];
v[i]=pow(x,i)*a[i]+v[i-1];
cout<<v[i]<<"\n";
i++;	
}
cout<<v[4];
return(0);
}
