/*Write a function in C that concatenates two strings without using any library functions such as strcat. 
The function should use pointers for both strings and dynamically allocate memory to hold the concatenated 
result. The function should be called concatenate(char *str1, char *str2) and return a pointer to the newly concatenated string
*/

//Concatenates - link (things) together in a chain or series.

#include <stdio.h>

// Function to concatenate two strings and return pointer
void concatenate(char* str1,  char* str2)
{
    // Navigate to the end of the first string
    while (*str1) {
        ++str1;
    }

    // Copy characters of the second string to the end of the first string
    while (*str2) {
        *str1++ = *str2++;
    }

    // Add the null-terminating character
    *str1 = '\0';
}

int main()
{
    char string1[50] = "Hello, and welcome to: ";
    char string2[] = "ESE 124";

    // Call function to concatenate strings
    concatenate(string1, string2);

    // Output the concatenated string
    printf("Concatenated String: %s\n", string1);

    return 0;
}
