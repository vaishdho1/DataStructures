#include <iostream>
using namespace std;
void quicksort(int *a,int start,int end);
int partition(int *a,int start,int end)
{
	int pindex,pivot,i,temp;
	pivot=a[end];
	pindex=start;
	for(i=start;i<end;i++)
	{if(a[i]<pivot)
	{
temp=a[i];
a[i]=pivot;
pivot=a[i];
	pindex++;
	}
}temp=a[pindex];
a[pindex]=a[end];
a[end]=temp;
	return pindex;
	
}
void quicksort(int *a,int start,int end)
{int pindex;
	while(start<end)
	{pindex=partition(a,start,end);
	quicksort(a,start,pindex-1);
	quicksort(a,pindex,end);
	}
}
int main()
{int i,n,a[10];
cout<<"Input size of the array \n";
cin>>n;
cout<<"Input the array \n";
for(i=0;i<n;i++)
cin>>a[i];
quicksort(a,0,n-1);
cout<<"The array is \n";
for(i=0;i<n;i++)
cout<<a[i];	
}
