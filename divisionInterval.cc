/*Napišite C++ program koji računa i ispisuje zbroj svih brojeva djeljivih s 5 iz intervala
<200, 300>. 
*/

#include <iostream>
#include <string>

using namespace std;


int main()
{
  int sum = 0;
  
  for(int i=201;i<300;i++)
  {
      if(i%5==0)
       sum+=i;
  }
  cout<<"Suma brojeva iz intervala djeljivih s 5 je: "<< sum <<endl;
}
