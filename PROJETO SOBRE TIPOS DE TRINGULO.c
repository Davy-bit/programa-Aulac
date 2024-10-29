#include<stdio.h>
#include<math.h>

int main (){
 float m1;
 float m2;
 float m3;

 printf("digite a medida1:");
 scanf("%f", &m1);


 printf("digite a medida2:");
 scanf("%f", &m2);

 
 printf("digite a medida3:");
 scanf("%f", &m3);


if(m1 == m2 && m2 == m3 && m1 == m3){
  printf("triangulo equilatero");
}
if(m1 == m2 && m2 != m3 && m1 != m3 || m1 == m3 && m1 != m2 && m2 != m3 || m2 == m3 && m3 != m1 && m2 != m1){
  printf("triangulo isosceles");
}
if(m1 != m2 && m2 != m3 && m1 != m3){
  printf("triangulo escaleno");

}
}   




       
    