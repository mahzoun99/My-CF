#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;
int main()
{
  int C0=0 , C1=0;
  string situ;
  cin >> situ;
  int lng = situ.length();
  // cout<<lng<<endl;
  for(int i=0; i<lng; i++)
    {
      if(situ[i]=='0')
	{
	  C0++;
	  C1=0;
	  //cout<<C0<<" 300"<<endl;
	  if(C0>=7)
	    break;
	}
      if(situ[i]=='1')
	{
	  C0=0;
	  C1++;
	  //cout<<C1<<" 301"<<endl;
	  if(C1>=7)
	    break;
	}
    }
  if( C0>=7 || C1>=7)
    cout << "YES";
  else
    cout << "NO";
  
  return 0;
}
