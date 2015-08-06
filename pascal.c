#include <stdio.h>
 
long factorial(int);
 
int main()
{
   int i, numero_filas, c, posicion_array;
   long elementos;
   long mi_array[40];
   mi_array[0] = 1;
   posicion_array = 0;
   // i, fila
   // c, columna
 
   printf("Numero de filas en el triangulo de pascal\n");
   //scanf("%d",&n);

	numero_filas = 5;
 
   for (i = 0; i < numero_filas; i++)
   {
      for (c = 0; c <= (numero_filas - i - 2); c++)
         printf(" ");

      for (c = 0 ; c <= i; c++)
      {
         elementos = factorial(i)/(factorial(c)*factorial(i-c));
         mi_array[posicion_array] = elementos;
         printf("%ld ", mi_array[posicion_array]);
         posicion_array++;
      }
 
      printf("\n");
   }
   /*
   for (int i = 0; i < 10; ++i)
   {
      printf("%ld ", mi_array[i]);
   }
   */
   return 0;
}
 
long factorial(int n)
{
   int c;
   long result = 1;
 
   for (c = 1; c <= n; c++)
         result = result*c;
 
   return result;
}
