#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;
int main()
{
  string str;
  cin >> str;
  int lng=str.size();
  for(int i=0; i<lng; i++)
    {
      if(str[i]!='a' && str[i]!='A' && str[i]!='o' && str[i]!='O' && str[i]!='Y' && str[i]!='y' && str[i]!='e' && str[i]!='E' && str[i]!='u' && str[i]!='U' && str[i]!='i' && str[i]!='I'){
	cout<<"."<<(char)tolower(str[i]);
      }
    }
      
  return 0;
}
