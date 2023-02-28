#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Declear variables 
    // filename <=50 characters, command <=10 characters, text <=1000 characters
  char filename[50], command[10], text[1000];
  FILE *fp;

     // Prompt user to enter command
   while (1) {
    printf("Enter a command (create, retrieve, update, delete, exit): ");
    scanf("%s", command);
   }

  return 0;
}