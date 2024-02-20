#include <stdio.h>
#include <stdbool.h>
int input_array_size();
void init_array(int n, bool a[]);
void eratosthenes_sieve(int n, bool a[]);
void output(int n, bool a[]);

int main() 
{
    int n = input_array_size();
    bool primes[n + 1];
    init_array(n, primes);
    eratosthenes_sieve(n, primes);
    output(n, primes);
    return 0;
}
int input_array_size() 
{
    int n;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    return n;
}
void init_array(int n, bool a[]) 
{
    for (int i = 0; i <= n; ++i)
    a[i] = true;
}
void eratosthenes_sieve(int n, bool a[]) 
{
    for (int p = 2; p * p <= n; ++p) 
    {
        if (a[p] == true) 
        {
            for (int i = p * p; i <= n; i += p)
            a[i] = false;
        }
    }
}
void output(int n, bool a[]) 
{
    printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 2; i <= n; ++i) 
    {
        if (a[i] == true)
        printf("%d, ", i);
    }
    printf("\n");
}
