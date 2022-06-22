#include<iostream>
#include<math.h>
int main()
{using namespace std;
int val,x,r=64,i;
cout<<"Input base/n";
cin>>x;
val=pow(x,2);
cout<<val<<"\n";
for(i=0;i<2;i++)
{val=pow(val,2);
}
cout<<val;
return(0);
}
