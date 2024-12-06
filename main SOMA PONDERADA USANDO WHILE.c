#include <stdio.h> 
int main(void) { 

 int n, s, p, r, d; 

 printf("Numero? "); 
 scanf("%d", &n); 
 s = 0; 
 p = 1; 

 while( n>0 ) { 
 r = n%10; 
 n = n/10; 
 s = s + r*p; 
 p++; 
 } 
 
 d = s%10; 
 printf("DV = %d\n", d); 
 return 0; 
}