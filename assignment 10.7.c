#include<stdio.h>
int f(int);
int main()
{
   
    int n,r,p;
    printf(" Enter the number of item n :");
    scanf("%d",&n);
    printf("enter no of combination r taken at a time :");
    scanf("%d",&r);
     p= f(n)/(f(r)*f(n-r));
     printf("Combination of %d items taken %d at a time is %d ",n,r,p);
      return 0;
}




int f(int x)
{
    int i,k=1;
    for(i=1;i<=x;i++)
    k=k*i;
    return k;
}