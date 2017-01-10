#include <stdio.h>
#include <string.h>
#define MAXLENGTH 100 /* the max length of the string taped */

void contract(char s1[], char s2[]); /* declaring the function */
int main(){
    char s1[MAXLENGTH]; /* the first String */
    char s2[MAXLENGTH]; /* the second String */
    printf("enter the string\n");
    gets(s1); 
   
    contract(s1, s2);
    printf("s2 = %s\n", s2); /* print s2, to see if the contract worked */
    return 0;
}

void contract(char s1[], char s2[]){
    char firstChar, lastChar; /*define the first char in a possible ASCII sequence and the last char in
                                that sequence*/
   
    int i, place = 0; /*the location to put the current char from s1 in s2 */

   
    for(i=0; i<strlen(s1); ++i){
        firstChar = s1[i];
        /* checks for 3 following ASCII notes */
         if((s1[i]+1) == s1[i+1] && s1[i+1] != '\0' && (s1[i+1]+1) == s1[i+2] && s1[i+2] != '\0' ){
                while((s1[i]+1) == s1[i+1] && s1[i+1] != '\0'){ 
                    lastChar = s1[i+1];
                    i++;
                }
                s2[place] = firstChar;
                ++place;
                s2[place] = '-';
                ++place;
                s2[place] = lastChar;
                ++place;
        }else{
       
            s2[place] = firstChar;
            ++place;
        }
    }
    s2[place] = '\0'; 
}
