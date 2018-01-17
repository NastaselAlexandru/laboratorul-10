#include <stdio.h>
#include<string.h>
char source[100], result[100];
char ch;
FILE *fp;
void CharacterCounter(char filename){

     int charcount = 0;
      if ( fp != NULL ){
	   while ((ch = getc(fp)) != EOF) {
            if (ch != ' ' && ch != '\n')
                ++charcount;
     printf("Characters : %d \n", charcount);
}
int main(){
  printf("Enter a filename to read from :\n");
  gets(source);
  fp = fopen(source,"r");

  printf("Enter a filename to write in :\n");
  gets(result);
  fp = fopen(result,"w");
  if ( fp != NULL ){
	   while ((ch = getc(fp)) != EOF) {
            if (ch != ' ' && ch != '\n'){
                if('ch' >= 'a' && 'ch' <= 'z' ){
                    ch = 'ch' - ('a' - 'A');
                    fputs(ch, source);
                }
                else
                     fputs(ch, source);
            }
}
  }
fprint( source);
}
