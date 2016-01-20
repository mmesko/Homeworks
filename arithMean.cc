/*Napišite C++ program koji za prirodan broj N računa aritmetičku sredinu znamenaka od N.
Primjer: Za N = 2354 program treba vratiti (2 + 3 + 5 + 4)/4 = 3.5.
Napomena: Program treba korektno vraćati rezultat za sve prirodne brojeve koji se mogu spremiti
kao int. Parcijalna rješenja za pojedinačne primjere nećemo bodovat*/

#include <iostream>
#include <string>

using namespace std;

double meanDig(int n)
{   
    int sum=0;
    int numDigits = 0;
    
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
        numDigits++;
    }
     
     return  (double)sum/numDigits;    
}

int main()
{
   int n =34;
   cout<< meanDig(n) <<endl;      
}