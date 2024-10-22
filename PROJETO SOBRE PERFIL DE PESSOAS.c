#include<stdio.h>
#include<math.h>

int main (){
 int soma1;
 int resto;
 int data1;
 int data2;

 printf("digite os dois primeiros numeros da sua data de nascimento:");
 scanf("%d", &data1);


 printf("digite os dois ultimos numeros da sua data de nascimento:");
 scanf("%d", &data2);

 soma1 = (data1 + data2);

 resto = (soma1 % 5);
 
if(resto == 0){
  printf("timido");
}
if(resto == 1){
  printf("sonhador");
}
if(resto == 2){
  printf("paquerador");
}
if(resto == 3){
  printf("atraente");
}
if(resto == 4){
  printf("irresistivel");
}
}
    




       
    