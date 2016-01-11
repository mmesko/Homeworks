
/*Napišite program koji će tražiti unošenje cijelog broja.
Program treba uneseni broj pretvoriti u broj u oktalnom brojevnom sustavu.
(cijeli dekadski broj pretvara se u oktalni uzastopnim dijeljenjem s brojem 8. Dijeli se sve dok rezultat ne postane nula. Ostaci cjelobrojnog djeljena spremaju se u polje, a na kraju se u polju ispisuju u obrnutom redoslijedu)*/

#include<stdio.h>
#include<math.h>
 
void intToOct(int num)  
{
int ostatak[50],i=0,length=0;
while(num>0)
 {
 ostatak[i]=num%8;
 num=num/8;
 i++;
 length++;
 }
printf("nOctalni broj: ");
     for(i=length-1;i>=0;i--)
             printf("%d",ostatak[i]);
}

int main()
{

int num;

 printf("Upisite cijeli broj: ");
 scanf("%d",&num);

intToOct(num);   // poziv funkcije
}
