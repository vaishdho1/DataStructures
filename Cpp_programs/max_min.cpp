#include<iostream>
int main()
{using namespace std;
int a[10],i,j,n,max,min;
cout<<"Input size \n";
cin>>n;
cout<<"Input array \n";
for(i=0;i<n;i++)
cin>>a[i];
if((n%2)==0)
  {
     min=max=a[0];
      for(i=1;i<n;i+=2)
          {if(a[i]>a[i+1])
              {if(a[i]>max)
                  max=a[i];
                  if(a[i+1]<min)
                  min=a[i+1];
              }
           else
           {
		      if(a[i+1]>max)
                  max=a[i+1];
                  if(a[i]<min)
                  min=a[i];
        }
        }
  }
  else
  {
  min=a[0];
  max=a[1];
  for(i=2;i<n;i+=2)
          {if(a[i]>a[i+1])
              {if(a[i]>max)
                  max=a[i];
                  if(a[i+1]<min)
                  min=a[i+1];
              }
           else
           {
		      if(a[i+1]>max)
                  max=a[i+1];
                  if(a[i]<min)
                  min=a[i];
        }
        }
  
}
cout<<"the max and min values are \n"<<max<<"\n"<<min;
return(0);
}
