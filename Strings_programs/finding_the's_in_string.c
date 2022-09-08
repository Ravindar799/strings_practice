#include<stdio.h>
#include<string.h>
void main() {
    char str[100];
    int t,h,e,sp,l,freq,i;
    freq = 0, l = 0;
    printf("Enter your string: ");
    fgets(str, sizeof str, stdin);
    l = strlen(str);
    for (i = 0; i <= l; i++) {
        t = (str[i] == 't' || str[i] == 'T');
        h = (str[i + 1] == 'h' || str[i + 1] == 'H');
        e = (str[i + 2] == 'e' || str[i + 2] == 'E');
        sp = (str[i + 3] == ' ' || str[i + 3] == '\0' || str[i + 3] == '\n');
        if((t && h && e && sp) == 1) 
            freq++;
    }
    printf("The frequency of the word /the/ is:%d", freq);
}