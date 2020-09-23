#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){

  setlocale(LC_ALL,"");;
  float a=0, taxa;
  printf("Qual é o seu salário?");
  scanf(" %f",&a);

  if (a<=1903.98){
    printf("Imposto de renda = %f",a);
  }

  else if (a>=1903.99 && a<=2826.65){
    taxa=a*7.5-142.80;
    printf("Imposto de renda = %f",taxa);
  }

  else if (a>=2826.66 && a<=3751.05){
    taxa=a*15-354.80;
    printf("Imposto de renda = %f",taxa);
  }

  else if (a>=3751.06 && a<=4664.68){
    taxa=a*22.5-636.13;
    printf("Imposto de renda = %f",taxa);
  }

  else if (a>=4664.69){
    taxa=a*27.5-869.36;
    printf("Imposto de renda = %f",taxa);
  }

  return 0;
}
