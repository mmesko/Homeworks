/*Napisati rekurzivnu f-ju koja obrne string
*/

#include <iostream>
#include <string>

using namespace std;

string reverse(string str)
{
     if (str.length()==1) return str;
     
     return reverse(str.substr(1))+str[0];
    
}

int main()
{
  string str = "maja";
   
  cout<<"Obrnuti string je: "<< reverse(str) <<endl;
}
