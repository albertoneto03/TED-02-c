#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){

  setlocale(LC_ALL,"");

  int a=0,b=0,c=0;
  printf("digite os numeros que deseja nas operaçoes basicas:");
  scanf(" %d %d",&a,&b);

  printf("qual operação você deseja? \n[1]=soma \n[2]=subtração \n[3]=multiplicação \n[4]=divisão\n");
  scanf( "%d",&c);

  if (c==1){
  printf("a soma deles é = %d",a+b);
  }

  else if (c==2){
  printf("a subtração deles é = %d",a-b);
  }

  else if (c==3){
  printf("a multiplicação deles é = %d",a*b);
  }

  else if (c==4){
  printf("a divisão deles é = %d",a/b);
  }

  return 0;
}
