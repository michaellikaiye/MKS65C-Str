
#include <stdio.h>
#include <string.h>

int mystrlen(char * s0){
  int len = 0;
  while(*s0++)
  len++;

  return len;
}

char * mystrcpy(char *s1, char *s2){
  while(*s1++ = *s2++);

  return s1;
}

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
  if(*s != c)
    return NULL;
  return s;
}


int main(){
  char lemon[100] = "What two words do not rhyme";
  char demon[100] = "These words";
  char lemon2[100] = "What two words do not rhyme";
  char demon2[100] = "These words";

  printf("-----------------------------------------------------------------\n");
  printf("STRLEN TESTS \n \n");
  int testlen = strlen(lemon);
  int testlen2 = mystrlen(lemon);
  int testlen3 = strlen("");
  int testlen4 = mystrlen("");

  printf("strlen %d \n",testlen);
  printf("mystrlen %d \n",testlen2);
  printf("strlen %d \n",testlen3);
  printf("mystrlen %d \n",testlen4);


  printf("--------------------------------------------------------\n");
  printf("STRCPY TESTS \n \n");
  strcpy(demon,lemon);
  mystrcpy(demon2,lemon2);
  printf("strcpy %s \n",demon);
  printf("mystrcpy %s \n",demon2);
  strcpy(lemon,"");
  strcpy(lemon2,"");
  printf("strcpy %s \n",lemon);
  printf("mystrcpy %s \n",lemon2);


  printf("--------------------------------------------------------\n");
  printf("STRNCAT TESTS \n \n");
  char Banana[100] = "Why did you pick these words";
  char Disagree[100] = "Why did you pick these words";
  char Apple[100] = "The last two were clever";
  char what[100] = "The last two were clever";

  char blue[100] = "Why did you pick these words";
  char red[100] = "The last two were clever";
  char blew[100] = "Why did you pick these words";
  char read[100] = "The last two were clever";


  strncat(Banana,Apple,4);
  printf("strncat %s \n",Banana);
  mystrncat(Disagree,what,4);
  printf("mystrncat %s \n",Disagree);

  strncat(red,blue,4);
  printf("strncat %s \n",red);
  mystrncat(read,blew,4);
  printf("mystrncat %s \n",read);



  printf("--------------------------------------------------------\n");
  printf("STRCMP TESTS \n \n");
  char testcmp[100] = "ABCD";
  char testcmp2[100] = "Abcd";
  char testcmp3[100] = "abcd";
  char testcmp4[100] = "aBCD";
  char testcmp5[100] = "";
  char testcmp6[100] = " Abcd";

  printf("strcmp %d \n", strcmp(testcmp,testcmp2));
  printf("mystrcmp %d \n", mystrcmp(testcmp,testcmp2));
  printf("strcmp %d \n", strcmp(testcmp,testcmp3));
  printf("mystrcmp %d \n", mystrcmp(testcmp,testcmp3));
  printf("strcmp %d \n", strcmp(testcmp,testcmp4));
  printf("mystrcmp %d \n", mystrcmp(testcmp,testcmp4));
  printf("strcmp %d \n", strcmp(testcmp,testcmp5));
  printf("mystrcmp %d \n", mystrcmp(testcmp,testcmp5));
  /*
  printf("strcmp %d \n", strcmp(testcmp,testcmp6));
  printf("mystrcmp %d \n", mystrcmp(testcmp,testcmp6));
  printf("strcmp %d \n", strcmp(testcmp2,testcmp3));
  printf("mystrcmp %d \n", mystrcmp(testcmp2,testcmp3));
  printf("strcmp %d \n", strcmp(testcmp2,testcmp4));
  printf("mystrcmp %d \n", mystrcmp(testcmp2,testcmp4));
  printf("strcmp %d \n", strcmp(testcmp2,testcmp5));
  printf("mystrcmp %d \n", mystrcmp(testcmp2,testcmp5));
  printf("strcmp %d \n", strcmp(testcmp2,testcmp6));
  printf("mystrcmp %d \n", mystrcmp(testcmp2,testcmp6));
  printf("strcmp %d \n", strcmp(testcmp3,testcmp4));
  printf("mystrcmp %d \n", mystrcmp(testcmp3,testcmp4));
  printf("strcmp %d \n", strcmp(testcmp3,testcmp5));
  printf("mystrcmp %d \n", mystrcmp(testcmp3,testcmp5));
  printf("strcmp %d \n", strcmp(testcmp3,testcmp6));
  printf("mystrcmp %d \n", mystrcmp(testcmp3,testcmp6));
  printf("strcmp %d \n", strcmp(testcmp4,testcmp5));
  printf("mystrcmp %d \n", mystrcmp(testcmp4,testcmp5));
  printf("strcmp %d \n", strcmp(testcmp4,testcmp6));
  printf("mystrcmp %d \n", mystrcmp(testcmp4,testcmp6));
  printf("strcmp %d \n", strcmp(testcmp5,testcmp6));
  printf("mystrcmp %d \n", mystrcmp(testcmp5,testcmp6));
  */

  printf("--------------------------------------------------------\n");
  printf("STRCHR TESTS \n \n");
  char Mouse[100] = "I hope this is not food";
  char Keyboard[100] = "Yeah please tell me this part of the computer";

  printf("strchr %s \n", strchr(Mouse, 'h'));
  printf("mystrchr %s \n", mystrchr(Mouse, 'h'));
  printf("strchr %s \n", strchr(Keyboard, 'l'));
  printf("mystrchr %s \n", mystrchr(Keyboard, 'l'));
  printf("strchr %s \n", strchr("No people in my house", 'h'));
  printf("mystrchr %s \n", mystrchr("No people in my house", 'h'));
  printf("strchr %s \n", strchr(Keyboard, 'z'));
  printf("mystrchr %s \n", mystrchr(Keyboard, 'z'));

  printf("-----------------------------------------------------------------\n");


  return 0;
}
