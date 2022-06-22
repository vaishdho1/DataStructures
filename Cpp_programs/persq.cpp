#include<stdio.h>
int main()
{int a,b,i,j,l=0;
printf("Input the numbers \n");
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
{for(j=1;j<i;j++)
if(i=j*j)
l++;
}
}
printf("%d",l);
return 0;
}

