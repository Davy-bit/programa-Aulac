#include <stdio.h> 
int main(void) { 
 int n, i, s; 

 printf("Numero? "); 
 scanf("%d", &n); 
 i = 1; 
 s = 0; 

 while( s<n ) { 
 s = s + i; 
 i++; 
 } 

 printf("Triangular: "); 
 if( s==n ) printf("sim\n"); 
 else printf("nao\n"); 
 return 0; 
 
}