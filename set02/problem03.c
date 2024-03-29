#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main() 
{
    int n, result;
    n = input_number();
    result = is_composite(n);
    output(n, result);
    return 0;
}
int input_number() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
int is_composite(int n) 
{
    int factors = 0;
    for (int i = 1; i <= n; ++i) 
    {
        if (n % i == 0)
        {
            factors++;
        }
    }
    return factors > 2;
}
void output(int n, int result) 
{
    if (result)
        printf("%d is a composite number.\n", n);
    else
        printf("%d is not a composite number.\n", n);
}
