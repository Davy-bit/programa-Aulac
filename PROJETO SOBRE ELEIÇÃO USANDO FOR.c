#include<stdio.h>
int main (){
int cont; 
int ne;
char voto;
int somaA = 0;
int somaB = 0;
int somaC = 0;
int somaX = 0;
printf("digite o numero de eleitores:");
scanf("%d" ,&ne);
for(cont = 1; cont <=ne; cont++){
printf("%d voto: (candidatos: a, b, c, nulo = qualquer outra letra)", cont);
scanf(" %c", &voto);
if(voto == 'a'){
somaA++;
}
else if(voto == 'b'){
somaB++;
}
else if(voto == 'c'){
somaC++;
}
else {
somaX++;
}
}
printf(" Canditato A = %d votos\n",somaA);
printf(" Canditato B = %d votos\n",somaB);
printf(" Canditato C = %d votos\n",somaC);
printf(" Votos nulos = %d votos\n",somaX);
}