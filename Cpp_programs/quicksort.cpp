#include<iostream>
using namespace std;
void quicksort(int *a,int left,int right)
{int pivot;
pivot=(left+right)/2;
int i,j,temp;
i=left;
j=right;
while(i<=j)
{while(a[i]<a[pivot])
i++;
while(a[j]>a[pivot])
j--;
if(i<=j)
{temp=a[i];
a[i]=a[j];
a[j]=temp;
j--;
i++;
}
}
if(left<j)
quicksort(a,left,j);
if(right>i)
quicksort(a,i,right);
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
