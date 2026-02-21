#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void lon(char *a){
  if(strlen(a) ==0){
    printf("%d", 1);
    return;
  }
  printf("%d",strlen(a));
  return;
}

int valCad(char *a, char *b){
  return (strlen(a) < 50 || strlen(b) < 50);

}
char *concat(char *a, char *b){
  int l1 = strlen(a);
  int l2 = strlen(b);
  char *z = (char*) malloc((l1 + l2) * sizeof(char));
  memcpy(z, a,l1);
  memcpy(z+l1,b,l2);
  z[l1+l2] = '\0';
  return z;
  
}

char *poti(char *a,int pt){
  char *z = NULL;
  if(pt == 0){
    return NULL;
  }

}



int main(){
   char *z = "cadenita"; 
  char *k = "cadenita2";
  char *p = concat(k,z);
  printf("%d", strlen(""));
  //printf("%d", valCad(z,z));
  
}
