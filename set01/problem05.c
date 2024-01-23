#include <stdio.h>
int input()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    return num;
}
int compare(int a, int b, int c)
{
 if (a>=b && a>=c)
 {
    return a;
 }
 else if (b>=a && b>=c)
 {
    return b;
 }
 else
 {
    return c;
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
    largest = compare(a,b,c);
    output(a, b, c, largest);
    return 0;
}