#include<stdio.h>
#include<string.h>
#define size_of 100
 int main () {
     char str[size_of], i, j, temp, p;
     printf("enter your string:");
     fgets(str,sizeof str, stdin);
    // scanf("%s",)
    p = strlen(str);
    printf("%d\n",p);
     printf("%s",str);
     for (i = 0 ; i < p ; i++)
     for ( j = 1; j < p ; j++)  {
       if (str[i] > str[j]) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
       } 
 }

     printf(" your know string:%s",str);
 }