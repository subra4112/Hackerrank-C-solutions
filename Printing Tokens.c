#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for(char *a=s ; *a!=NULL; a++){
       if(*a==' '){
          *a="\n";}
              
          }
    //Write your logic to print the tokens of the sentence here.
    printf("%s",s);
    return 0;
}
