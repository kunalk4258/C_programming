#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];
    
    printf("Enter first string: ");
    scanf("%s", string1);
    
    printf("Enter second string: ");
    scanf("%s", string2);
    
    strcat(string1, string2);
    
    printf("Concatenated string: %s", string1);
    
    return 0;
}
