/*Napišite C++ program koji za zadane realne (float) stranice kvadra a, b i c računa i ispisuje
oplošje tog kvadra. 
*/

#include <iostream>
#include <string>

using namespace std;


int main()
{
  float O,a,b,c;
  
  cout << "Upisite stranice a,b,c: "<<endl;
  cin>>a>>b>>c;
  
  O=2*a*b+2*a*c+2*b*c;
   
  cout<<"Oplošje kvadra je: "<< O <<endl;
}
