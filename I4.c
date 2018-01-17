#include <stdio.h>
#include<string.h>
char filename[100];
void CharacterCounter(char filename){
    char ch;
     int charcount = 0;
     FILE *fp;
     fp = fopen(filename,"r");
      if ( fp != NULL ){
	   while ((ch = getc(fp)) != EOF) {
            if (ch != ' ' && ch != '\n')
                ++charcount;
     printf("Characters : %d \n", charcount);
}
int main(){
  printf("Enter a filename :");
  gets(filename);
  CharacterCounter(filename);
}
