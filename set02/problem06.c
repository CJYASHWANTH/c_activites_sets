#include <stdio.h>
#include <string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main() 
{
    char input[100];
    char reversed[100];
    input_string(input);
    str_reverse(input, reversed);
    output(input, reversed);
    return 0;
}
void input_string(char *a) 
{
    printf("Enter a string: ");
    scanf("%s", a);
}
void str_reverse(char *str, char *rev_str) 
{
    int length = strlen(str);
    int i;
    for (i = 0; i < length; i++) 
    {
        rev_str[i] = str[length - 1 - i];
    }
    rev_str[length] = '\0';
}
void output(char *a, char *reverse_a) 
{
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}
