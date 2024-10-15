#include<stdio.h>
#include<math.h>

int main (){
 int copias;
 float calculo;


 printf("digite a quantidade de copias:");
 scanf("%d", &copias);

if(copias > 100){
  calculo = (copias * 0.20);
  printf("valor a ser pago: %.2f", calculo);
}
if(copias <= 100){
  calculo = (copias * 0.25);
  printf("valor a ser pago: %.2f", calculo);
}

}

    




       
    