#include <stdio.h>
#include<string.h>
char filename[100];
char ch;

void(char filename){
    FILE *fp;
    if ( fp != NULL){
	   while ((ch = getc(fp)) != EOF) {
		   if (ch == '\n')
                printf("\n");
           else
                printf("%c", ch);
}

}
}
int main(){

    printf("Enter a filename :");
    gets(filename);

    display(filename);
}
