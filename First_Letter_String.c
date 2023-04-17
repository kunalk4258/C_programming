#include <stdio.h>

int main() {
   char str[100];
   int i;

   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);

   printf("The first letter of each word in the string is: ");
   printf("%c ", str[0]);

   for (i = 1; str[i] != '\0'; i++) {
      if (str[i] == ' ') {
         printf("%c ", str[i+1]);
      }
   }
   return 0;
}
