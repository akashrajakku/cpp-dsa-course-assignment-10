#include<stdio.h>
float si(float,float,float);
int main()
{
   
    float a,b,c,p;
    printf(" Enter Principal Rate and Time :");
    scanf("%f%f%f",&a,&b,&c);
    p=si(a,b,c);
    printf("Simple Interest is %.2f",p);
    return 0;
    
    
}
float si(float x,float y,float z)
{
    float b;
    b=(x*y*z)/100;
    return (b);
}