#include<stdio.h>
float area(float);
int main()
{
   
    float p,r;
    printf("Enter radius of circle :");
    scanf("%f",&r);
    p=area(r);
    printf("area of circle is %f",p);
    return 0;
    
    
}
float area(float a)
{
    float b;
    b=3.14*a*a;
    return (b);
}