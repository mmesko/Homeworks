//Hornerov algoritam

#include <stdio.h>

int horner(double poly[], int n, int x)
{
    double result = poly[0];  // inicijalizacija rezultata
    
    for (int i=1; i<n; i++)
        result = result*x + poly[i];
    return result;
}
  
int main()
{
    // Evaluacija od polinoma:  2x3 - 6x2 + 2x - 1 for x = 3
    double poly[] = {2, -6, 2, -1};
    int x = 3;
    int n = sizeof(poly)/sizeof(poly[0]);
    printf("Vrijednost polinoma u danoj tocki je:%5.1d",horner(poly, n, x));
    return 0;
 
}