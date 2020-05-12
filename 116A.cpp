#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;
int main()
{
  int n,num=0,sum=0;
  cin>>n;
  int inp[n],outp[n];
  for(int i=0; i<n; i++)
    {
      cin >> outp[i] >> inp[i];
      sum= sum+inp[i]-outp[i];
      if(num<sum)
	num=sum;
    }
  cout<<num;
  return 0;
}
