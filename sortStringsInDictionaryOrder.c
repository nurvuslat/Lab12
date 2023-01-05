//Write C Program to Sort Strings in Dictionary Order

#include <stdio.h>
#include <string.h>

int main() {
   char str[10][50], temp[50];
   int i, j; 
   
   printf("Enter 10 words: ");

   for (i = 0; i < 10; ++i) 
   {
    	fgets(str[i], sizeof(str[i]), stdin);
   }

   for (i = 0; i < 10; ++i) 
   {
      for (j = i + 1; j < 10; ++j) 
	  {
         if (strcmp(str[i], str[j]) > 0) 
		 {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   printf("\nIn the dictionary order: \n");
   
   for (i = 0; i < 10; ++i) 
   {
      fputs(str[i], stdout);
   }
   
   return 0;
}

