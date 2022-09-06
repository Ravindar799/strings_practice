// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define str_size 100
void main()
{
    char str[str_size];
    int i, len, vowel, cons;
	
       printf("----------------------------------------------\n"); 	
       printf("Input the string : ");
      fgets(str, sizeof str, stdin);	
      vowel = 0;
      cons = 0;
      len = strlen(str);
      for(i > 0; i < len; i++) {
          if ((str[i] >= 'a' && str[i] <= 'z') || str[i] >= 'A' && str[i] <= 'Z') {
             cons++;
          }
         if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
      }
      printf (" the total number of vowels int the string is %d \n",vowel);
      printf("The total number of consonant in the string is%d :  ",cons);
}