#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc,char *argv[]){
    int c;

    if('argv[0]' <= 'Z')
        while((c = getchar()) != EOF)
            putchar(tolower(c));
    if('argv[0]' > 'Z')
        while((c = getchar()) != EOF)
            putchar(toupper(c));

}
