#include<stdio.h>
#include<math.h>

int main (){
 float altura;
 char sexo;
 float pim;
 float pif;

 printf("digite o sexo do individuo(h ou m):");
 scanf("%c", &sexo);


 printf("digite a altura do individuo:");
 scanf("%f", &altura);

if(sexo == 'h'){
  pim = (72.7*altura)-58;
  printf("%f", pim);
}
if(sexo == 'm'){
  pif = (62.1*altura)-44.7;
  printf("%f", pif);
}
}
    




       
    