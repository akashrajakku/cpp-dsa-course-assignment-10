#include<stdio.h>
int fact(int);
int main()
{
   
    int n,p;
    printf(" Enter a number upto which you want factorial :");
    scanf("%d",&n);
    p=fact(n);
    printf("factorial is %d",p);
     return 0;
}
int fact(int x)
{
    int i,k=1;
    for(i=1;i<=x;i++)
    k=k*i;
    return k;
}