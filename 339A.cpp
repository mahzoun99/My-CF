#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;
int main()
{
  string str;
  char chan;
  cin>>str;
  int lng = str.size();
  
  for(int i=0; i<lng; i+=2)
    {
      for(int j=i; j<lng; j+=2)
	{
	  if((int)str[i]>(int)str[j])
	    {
	      chan=str[j];
	      str[j]=str[i];
	      str[i]=chan;
	      // cout<<chan<<endl;
	    }
	}
    }
  cout<<str;
  return 0;
}
