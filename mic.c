#include <stdio.h>
#include <string.h>
char * mystrncat( char *dest, char *source, int n){
  int destLength = strlen(dest);
  int i;
  for (i = 0; i < n && source[i] != '\0'; i++)
    *(dest + destLength + i) = *(source + i);
  *(dest + destLength + i) = '\0';
  
  return dest;
}

int mystrcmp( char *s1, char *s2 ){
  while(*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
    s1++;
    s2++;
  }

  return *s1 - *s2;
}

char * mystrchr( char *s, char c ){
  while(*s != '\0' && *s != c)
    s++;

  return s;
}

int main(){
  char a[10] = "dog";
  char* b = "hot";
  char* c = mystrncat(a,b,5);
  char* d = strncat(a,b,2);
  printf("%s,%s \n", c, d);
  printf("%d.%d \n", mystrcmp("aba", "abA"),strcmp("ab","ab")); 
  printf("%d.%d \n", mystrcmp(a,b), strcmp(a,b));
  printf("%s,%s \n", mystrchr("so sad man",'a'), strchr("so sad man", 'a'));
  
  return 0;
}
