#include <stdio.h>
#include<string.h>
FILE *fp;
char filename[100];
char ch;
int linecount;

int main(){

    printf("Enter a filename :");
    gets(filename);

    fp = fopen(filename,"r");

   if ( fp != NULL){
	   while ((ch = getc(fp)) != EOF) {
		   if (ch == '\n')
                ++linecount;
}

    printf("Lines : %d \n", linecount);
}
