#include<stdio.h>
void oddnatural(int);
int main()
{
   
    int n;
    printf(" Enter a number upto which you want odd natural number :");
    scanf("%d",&n);
    oddnatural(n);
     return 0;
}
void oddnatural(int x)
{
    int i=1;
    for(i=1;i<=2*x-1;i+=2)
    printf("%d ",i);
}