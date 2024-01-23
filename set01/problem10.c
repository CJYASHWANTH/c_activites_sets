#include <stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main() {
    char string1[100], string2[100];
    
    input_two_strings(string1, string2);
    
    int result = stringcompare(string1, string2);
    
    output(string1, string2, result);

    return 0;
}

void input_two_strings(char *string1, char *string2) {
    printf("Enter the first string: ");
    scanf("%99s", string1); 
    printf("Enter the second string: ");
    scanf("%99s", string2); 
}
int stringcompare(char *string1, char *string2) 
{
    int i = 0;
    while (string1[i] != '\0' && string2[i] != '\0') 
    {
        if (string1[i] < string2[i]) 
        {
            return -1;
        } else if (string1[i] > string2[i]) 
        {
            return 1;
        }
        i++;
    }

    if (string1[i] == '\0' && string2[i] == '\0') 
    {
        return 0; 
    } else if (string1[i] == '\0') 
    {
        return -1;
    } else 
    {
        return 1;
    }
}

void output(char *string1, char *string2, int result) {
    if (result == 0) 
    {
        printf("%s is equal to %s\n", string1, string2);
    } else if (result < 0) 
    {
        printf("%s is smaller than %s\n", string1, string2);
    } else 
    {
        printf("%s is greater than %s\n", string1, string2);
    }
}
