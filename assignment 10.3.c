#include<stdio.h>
int evenodd(int);
int main()
{
   
    int a,p;
    printf(" Enter a number :");
    scanf("%d",&a);
    p=evenodd(a);
    printf("%d",p);
    return 0;
    
    
}
int evenodd(int x)
{
    int b ;
    if(x%2==0)
    b=1;
    else
    b=0;
    return (b);
}