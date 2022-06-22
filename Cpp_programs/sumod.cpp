#include<stdio.h>
int main()
{int x,i,y,sum=1;
printf("input the number");
scanf("%d,&x");
while(x>0)
{y=x%10;
sum=sum*y;
x=x/10;
printf("%d",sum);}
printf("%d",sum);
}
