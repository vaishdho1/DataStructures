#include<iostream>
using namespace std;
void bubblesort(int a[][5],int n,int m)
{int i,j,k,temp;
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{temp=a[i][j];
k=j-1;
while(temp<a[i][k]&&k>=0)
{a[i][k+1]=a[i][k];
k--;
}
a[i][k+1]=temp;
}
cout<<"The winner of"<<(i+1)<<"event is"<<a[i][0]<<"\n";
}
	}	
	int  main()
	{int i,j,n,m,a[5][5];
		cout<<"Input the no. of events \n";
		cin>>n;
		cout<<"Input the no of players \n";
		cin>>m;
		cout<<"Input times for the events \n";
		for(i=0;i<n;i++)
		{for(j=0;j<m;j++)
		cin>>a[i][j];
		}
		bubblesort(a,n,m);
	}

