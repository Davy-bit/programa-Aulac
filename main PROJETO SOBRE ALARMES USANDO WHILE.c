#include <stdio.h> 
int main(void) { 
 int x, y, t; 

 printf("Intervalos? "); 
 scanf("%d %d", &x, &y); 
 t = 1; 

 while( t%x!=0 || t%y!=0 ) t++; 
 printf("Tempo min = %d\n", t); 
 return 0; 
 
}