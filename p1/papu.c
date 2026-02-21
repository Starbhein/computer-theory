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
  return NULL; 
}
void pref(char *k){
  char *a = k;
  for(int i = strlen(a)-1; i>=0; i--){
    a[i] = a[i] >> 8;
    printf("\n%s", a);
  }
  printf("%s\n", "λ");
}

void sufix(char *k){
  char *a = k;
  for(int i = 0; i< strlen(a); i++){
    a[i] = a[i] <<8;
    printf("\n%s", a);
  }
}


int main(){
  char *z = "cadenita"; 
  char *k = "cadenita2";
  char *u = concat(k,"");
  //printf("%s", u); 
  //for(int i =0; k[i] != '\0'; i++){
    //u[6] = u[6] >> 8;
  //}

  //printf("%s", u);
  //char *p = concat(k,z);
  //printf("%d", strlen(""));
  //printf("%d", valCad(z,z));
  pref(u);

  printf("u: %s\n",u);
  sufix(u);

}
