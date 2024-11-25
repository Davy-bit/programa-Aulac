#include<stdio.h>
#include<math.h>

int main (){
float capital;
float taxadejuros;
float periodo;
float montante;
int c;

printf("digite o capital aplicado:");
scanf("%f" ,&capital);
printf("digite a taxa de juros:");
scanf("%f" ,&taxadejuros);
printf("digite o periodo de aplicacao;");
scanf("%f",&periodo);

for(c=1 ; c <= periodo ; c++){
montante = capital*pow((1+ taxadejuros/100), c);
printf("%d° mes = %.2f\n",c,montante);
}
}
















