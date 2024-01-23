#include <stdio.h>

float input()
{
    float n;
    printf("Enter the number you want square root of - ");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float a,b=0;
    a=n/2;
    while(a!=b)
    {
        b=a;
        a=(n/b+b)/2;
    }
    return a;
}
void output(float n,float s)
{
    printf("The square root of %.0f is %f",n,s);
}
int main()
{
    float n,s;
    n=input();
    s=square_root(n);
    output(n,s);
    return 0;
}