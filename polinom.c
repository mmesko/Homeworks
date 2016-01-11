/*Napisati program koji za zadani niz realnih brojeva a duljine n+1 (n je također zadan) i za realni broj x ispisuje vrijednost polinoma */

#include<stdio.h>
int main()
{
    int x=2, n=4 , a[]={1, 2, 3, 4, 5};
    double p=0, pot = 1;
    int i;
    
    for( i=0; i<=n; i++ )
    {
    	p+=a[i]*pot;
    	pot*=x;    
	}
      printf ("p(%d) = %lf\n ",x,p);
return 0;
}