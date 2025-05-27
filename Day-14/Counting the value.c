#include <stdio.h>

int main()
{
int n,op,start,end,count=0;
scanf("%d %d",&n,&op);
int a[n],i,j;
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(j=0;j<op;j++)
{
    scanf("%d %d",&start,&end);
    for(i=0;i<n;i++)
     {
      if(a[i]>=start && a[i]<=end)
      {
       count++;
      }
    }
printf("%d",count);
}
    return 0;
}