#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){

  setlocale(LC_ALL,"");

  int a=0,b=0,c=0;
  printf("digite os numeros que deseja nas opera�oes basicas:");
  scanf(" %d %d",&a,&b);

  printf("qual opera��o voc� deseja? \n[1]=soma \n[2]=subtra��o \n[3]=multiplica��o \n[4]=divis�o\n");
  scanf( "%d",&c);

  if (c==1){
  printf("a soma deles � = %d",a+b);
  }

  else if (c==2){
  printf("a subtra��o deles � = %d",a-b);
  }

  else if (c==3){
  printf("a multiplica��o deles � = %d",a*b);
  }

  else if (c==4){
  printf("a divis�o deles � = %d",a/b);
  }

  return 0;
}
