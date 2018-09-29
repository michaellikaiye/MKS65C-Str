
#include <stdio.h>
#include <string.h>

int mystrlen(char * s0){
  int len = 0;
  while(*s0++) len++;
  return len;
}

char * mystrcpy(char *s1, char *s2){
  while(*s1++ = *s2++);
  return s1;
}

/*
char * mystrncat( char *dest, char *source, int n){

}

int mystrcmp( char *s1, char *s2 ){

}

char * mystrchr( char *s, char c ){

}
*/

int main(){
  char lemon[] = "What two words do not rhyme";
  char demon[] = "These words";
  char lemon2[] = "What two words do not rhyme";
  char demon2[] = "These words";

  int testlen = strlen(lemon);
  int testlen2 = mystrlen(lemon);

  printf("strlen %d \n",testlen);
  printf("mystrlen %d \n",testlen2);


  strcpy(demon,lemon);
  mystrcpy(demon2,lemon2);

  printf("strcpy %s \n",demon);
  printf("mystrcpy %s \n",demon2);


  return 0;
}
