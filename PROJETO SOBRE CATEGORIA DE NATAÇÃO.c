#include<stdio.h>
#include<math.h>

int main (){
 float idade;
 float categoria;

 printf("digite a idade do nadador:");
 scanf("%f", &idade);

if(idade <= 10){
  printf("categoria infantil!");
}
if(idade > 10 && idade <= 17){
  printf("categoria juvenil!");
}
if(idade > 17){
  printf("categoria senior!");
}

}

    




       
    