#include <stdio.h>
#include <string.h>

int mystrlen(char * s0){
  int len = 0;
  while(*s0++) len++;
  return len;
}

char * mystrcpy(char *s1, char *s2){
  for(int c = 0; s2[c]; c++){
    s1[c] = s2[c];
  }
  return s1;
}

char * mystrncat( char *dest, char *source, int n){

}

int mystrcmp( char *s1, char *s2 ){

}

char * mystrchr( char *s, char c ){


}

int main(){
  return 0;
}
