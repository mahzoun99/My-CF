#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;
int main()
{
  int M[5][5];
  int wy;

  for(int i=0; i<5; i++)
    {
      for(int j=0; j<5; j++)
	{
	  cin>> M[i][j];
	}
    }
  
  for(int i=0; i<5; i++)
    {
      for(int j=0; j<5; j++)
	{
	  if(M[i][j]==1)
	    {
	      wy = ((i-2)>0 ? (i-2): -(i-2)) + ((j-2)>0 ? (j-2): -(j-2)) ;
	    }
	}
    }
  cout<<wy;
  return 0;
}
