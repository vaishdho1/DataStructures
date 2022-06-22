#include<iostream>
using namespace std;
int fact(int n)
{int l,m;
if(n==0)
 return -1;
 else
 { l= n*fact(n-1);
   m= n*fact(n-2);
 }
return(max(l,m));	
	
}
int main()
{int x,k;
cout<<"Input number \n";
cin>>x;
k=fact(x);

}
