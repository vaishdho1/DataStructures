#include<iostream>
int bsearch(int a[10],int n,int ele)
{using namespace std;
int beg,end,mid;
beg=0;
end=n-1;
while(beg<=end)
{mid=(beg+end)/2;
if(ele==a[mid])
return(mid);
else
if(ele>a[mid])
beg=mid+1;
else
if(ele<a[mid])
end=mid-1;
}
return(-1);
}
int main()
{using namespace std;
int a[10],ele,n,s,i;
cout<<"Input array size \n";
cin>>n;
cout<<"Input array \n";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"Input the element to search \n";
cin>>ele;
s=bsearch(a,n,ele);
if(s==-1)
cout<<"SORRY!!Element not found";
else
cout<<"The position of the element is "<<s+1;
return(0);
}


	

