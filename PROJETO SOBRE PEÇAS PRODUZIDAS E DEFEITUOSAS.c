#include<stdio.h>
#include<math.h>

int main (){
 int produzidas;
 int defeituosas;
 float calculo;


 printf("digite a quantidade de peças produzidas:");
 scanf("%d", &produzidas);

 printf("digite a quantidade de peças defeituosas:");
 scanf("%d", &defeituosas);
 
 calculo = produzidas * 10/100;

if(defeituosas >= calculo){
  printf("maquina precisa de manutencao!");
}
if(defeituosas < calculo){
  printf("maquina nao precisa de manutencao!");
}

}

    




       
    