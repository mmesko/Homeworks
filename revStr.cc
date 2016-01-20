/*Obrnuti string bez rekurzije
*/

#include <iostream>
#include <string>

using namespace std;


int main()
{
  string str;
  cout<<"Unesite string: "<<endl;
  cin>>str;
  
  for(int i=str.length()-1; i>-1 ;i--)
  {
     cout<<str[i]<<endl; 
  }
   
  
}