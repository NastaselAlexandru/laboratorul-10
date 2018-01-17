#include <stdio.h>
#include<string.h>
char filename[100];
char ch;
void LongestLineLength(char filename){
    FILE *fp;
    char ch, s[100], rez[100];
    int charcount = 0;
    int max = 0;
    fp = fopen(filename,"r");
    if ( fp != NULL ){
            while ((ch = getc(fp)) != EOF) {
                if (ch != ' ' && ch != '\n')
                    s[charcount] = ch;
                    ++charcount;

                if(ch == '\n'){
                    if(max < charcount){
                        max = charcount;
                        strcpy(rez,s);
                        charcount = 0;
                        strcpy(s, NULL);
                    }else{
                        charcount = 0;
                        strcpy(s, NULL);
                    }

                }
    }

    printf( "%d \n", max);
    printf( "%s", rez);
}
int main(){
    printf("Enter a filename :");
    gets(filename);
    LongestLineLength(filename);
}
