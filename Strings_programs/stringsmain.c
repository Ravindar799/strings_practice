#include <stdio.h>
#include <string.h>
#define str_size 100 
void main()
{
    char str[str_size];
    int alp, digit, spl, i;
    alp = digit = spl = i = 0;
    printf("Input the string :");
    fgets(str, sizeof str, stdin);
    // scanf("%s",str);
    printf("%s",str);

    while(str[i]!='\n')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else 
        {
            spl++;
        }

        i++;
    }
    printf("numer of Alphabets are: %d\n",alp);
    printf("number of digits are: %d\n",digit);
    printf("number of  Special characters are: %d\n",spl);

}




--------------------------------->
#include <stdio.h>
#include<ctype.h>
#define size 100
void main() {
    char str[size];
    int alp, digit, spl, i,j,k,l;
    alp = digit = spl = i = 0;
    printf("Input the string :");
    fgets(str, sizeof str, stdin);
    printf("%s",str);
    while(str[i] != '\n') {
       
        if(isdigit('i') > 0) {
            digit++;
        }
         if(isalpha('i') > 0) {
            alp++;
        }
        else if (ispunct('i') > 0) {
            spl++;
        }
        i++;
    }
    printf("numer of Alphabets are: %d\n",alp);
    printf("number of digits are: %d\n",digit);
    printf("number of  Special characters are: %d\n",spl);
}