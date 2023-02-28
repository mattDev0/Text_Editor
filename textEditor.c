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

     //creates a file when user enters "create"
    if (strcmp(command, "create") == 0) {
      printf("Enter the name of the file to create: ");
      scanf("%s", filename);

      fp = fopen(filename, "w");
      if (fp == NULL) {
        printf("Error: could not create file.\n");
        continue;
      }

      printf("Enter text to write to file (max 1000 characters):\n");
      scanf(" %[^\n]s", text);
      fputs(text, fp);

      fclose(fp);
    }

    // retrives an exiisting file when user enters "retrieve"
    else if (strcmp(command, "retrieve") == 0) {
      printf("Enter the name of the file to retrieve: ");
      scanf("%s", filename);

      fp = fopen(filename, "r");
      if (fp == NULL) {
        printf("Error: could not open file.\n");
        continue;
      }

      printf("File contents:\n");
      while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
      }

      fclose(fp);
    }


    // updates an existing file when user enters "update"
    else if (strcmp(command, "update") == 0) {
      printf("Enter the name of the file to update: ");
      scanf("%s", filename);

      fp = fopen(filename, "a");
      if (fp == NULL) {
        printf("Error: could not open file.\n");
        continue;
      }

      printf("Enter text to append to file (max 100 characters):\n");
      scanf(" %[^\n]s", text);
      fputs(text, fp);

      fclose(fp);
    }


   }

  return 0;
}