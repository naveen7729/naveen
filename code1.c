#include<stdio.h>

int main()
{
int a,dif,t=0;
float b;
scanf("%d %d",&a,&b);
while(a>=1)
{
t=t+a;
dif=a*(b/100);
if(dif==0)
break;
a=a-dif;
}
printf("%d",t);
return 0;
}
