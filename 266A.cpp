#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;
int main()
{
  string s;
  int n,counter=0;
  cin>>n;
  cin>>s;
  for(int i=0; i<n; i++)
    {
      if(s[i]==s[i+1])
	counter++;
    }
  cout<<counter;
  return 0;
}
