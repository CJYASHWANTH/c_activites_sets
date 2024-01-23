#include <stdio.h>
int input()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    return num;
}
void compare(int a, int b, int c, int *largest)
{
 if (a>=b && a>=c)
 {
    *largest= a;
 }
 else if (b>=a && b>=c)
 {
    *largest= b;
 }
 else
 {
    *largest= c;
 }
}
void output(int a, int b, int c, int largest)
{
    printf("The largest of %d, %d and %d is %d\n", a,b,c,largest);
}
int main()
{
    int a, b, c, largest;
    a = input();
    b = input();
    c = input();
    compare(a, b, c, &largest);
    output(a, b, c, largest);
    return 0;
}