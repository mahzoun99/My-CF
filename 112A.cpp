#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;
int main()
{
  string str1,str2;
  cin >> str1 >> str2;
  int lng = str1.length();
  for(int i=0; i<lng; i++)
    {
      if(tolower(str1[i])>tolower(str2[i]))
		 {
		   cout<<"1";
		   return 0;
		 }
      else if(tolower(str1[i])<tolower(str2[i]))
	{
	  cout<<"-1";
	  return 0;
	}
    }
  cout<<"0";
		   
  return 0;
}
