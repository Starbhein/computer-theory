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
char *reverseC(char *a){
  char *x = (char*)malloc((strlen(a)+1) *sizeof(char));
  memcpy(x,a,strlen(a));
  char temp;
  for(char *k = x, *z = x + strlen(x)-1; k < z; k++,z--){
    temp = *k;
    *k = *z;
    *z = temp;
  }
  return  x;
}
char *concat(char *a, char *b){
  
  int l1 = strlen(a);
  int l2 = strlen(b);
  if(l1 == 0 && l2== 0) return "λ";

  char *z = (char*) malloc((l1 + l2) * sizeof(char));
  memcpy(z, a,l1);
  memcpy(z+l1,b,l2);
  z[l1+l2] = '\0';
  return z;
  
}

char *poti(char *a,int pt){
  if(pt == 0){
    return "λ";
  }
  if(pt < 0){
    return poti(reverseC(a),pt * (-1));
  }
  return concat(a,poti(a,pt-1)); 
}
void pref(char *k){
  char *a = k;
  for(int i = strlen(a)-1; i>=0; i--){
    a[i] = a[i] >> 8;
    printf("\n%s", a);
  }
  printf("%s\n", "λ");
}

char *potiOpt(char *a, int pt){
  if(pt == 0) return "λ";
  int sz = strlen(a);
  char *z;
  if(pt < 0){
    z = reverseC(a);
    pt *= -1;
  }else{
    z = a;
  }
  char *x = (char*)malloc(sizeof(char) * ((sz * pt) + 1));
  for(int i = 0; i < pt; i++){
    memcpy(x + (sz *i), z, sz );
  }
  x[pt * sz]= '\0';
  if(z!=a) free(z);

  return x;

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
  printf("reversed string %s \n", reverseC(u));
  //printf("%s", u);
  //char *p = concat(k,z);
  //printf("%d", strlen(""));
  //printf("%d", valCad(z,z));
  printf("concat of u to n poti: %s ", potiOpt(u,-10));
 // pref(u);

  //printf("u: %s\n",u);
  //sufix(u);

}
