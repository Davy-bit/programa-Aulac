#include<stdio.h>
#include<math.h>

int main (){
 float N1;
 float N2;
 float N3;
 float N4;
 float media;

 printf("digite a nota numero 1:");
 scanf("%f", &N1);
 printf("digite a nota numero 2:");
 scanf("%f", &N2);
 printf("digite a nota numero 3:");
 scanf("%f", &N3);
 printf("digite a nota numero 4:");
 scanf("%f", &N4);

 media = (N1 + N2 + N3 + N4) / 4;
 printf("%f", media);

if(media >= 7){
  printf("aluno aprovado!");
}
if(media > 4 && media < 7){
  printf("aluno esta de exame final!");
}
if(media < 4){
  printf("aluno reprovado!");
}

}

    




       
    