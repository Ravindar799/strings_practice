#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
  char str[100];
  int ctr, ch, i, l;

       printf("\n\nReplace lowercase characters by uppercase and vice-versa :\n");
	   printf("Input the string : ");
       fgets(str, sizeof str, stdin);  

  l=strlen(str);
  printf("\nThe given sentence is   : %s",str);
  printf("After Case changed the string  is: ");
  for(i=0; i < l; i++)
  {
    ch = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
    putchar(ch);
   }
   printf("\n\n");

} 
