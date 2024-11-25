#include<stdio.h>

int main (void){
int nmp;
int idade;
int idadem = 0;
int m;
int c;

printf("informe o numero de pacientes\n");
scanf("%d", &nmp);

for(c=1 ; c <= nmp ; c++){

printf("digite a idade do paciente: %d\n", c);
scanf("%d", &idade);
if(idade  > idadem){
idadem = idade;
}
}


printf("a idade do mais velho sera: %d", idadem );

return 0;
} 


       