#include<stdio.h>

int main (void){
int nma;
int nota;
float media;
float acumulador = 0;
int c;

printf("informe o numero de alunos\n");
scanf("%d", &nma);

for(c=1 ; c <= nma ; c++){

printf("digite a nota: %d\n", c);
scanf("%d", &nota);
acumulador += nota;
}

media = acumulador / nma;
printf("a nota do aluno sera: %.2f", media);

return 0;
} 


       