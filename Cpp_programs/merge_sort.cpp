#include<iostream>
using namespace std;
void mergesort(int *a,int low,int high,int mid);
void merge(int *a,int low,int high)
{int mid;
if(low<high)
{mid=(low+high)/2;
merge(a,low,mid);
merge(a,mid+1,high);
mergesort(a,low,high,mid);
}
return;		
}
void mergesort(int *a,int low,int high, int mid)
{int i,j,k,c[50];
i=low;k=low;j=mid+1;
while(i<=mid&&k<=high)
{if(a[i]>a[j])
  {c[k]=a[j];
   k++;
   j++;
  }
  else
  {c[k]=a[i];
  k++;
  i++;
  }
	}	
	while(i<mid)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<high)
	{c[k]=a[j];
	j++;
	k++;
	}
	for(i=low;i<k;i++)
	a[i]=c[i];
}
	int main()
	{int i,n,a[10];
cout<<"Input size of the array \n";
cin>>n;
cout<<"Input the array \n";
for(i=0;i<n;i++)
cin>>a[i];
merge(a,0,n-1);
cout<<"The sorted array is \n";
for(i=0;i<n;i++)
cout<<a[i]<<"\n";
return 0;
			}
