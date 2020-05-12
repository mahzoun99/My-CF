#include <iostream>
#include <string>

using namespace std;
int main()
{
  int k,n,w;
  cin>>k>>n>>w;
  int mon=0;
  for(int i=0; i<w; i++)
    mon += (i+1) * k;
  if(mon-n >0)
    cout<<mon-n;
  else
    cout<<0;
  return 0;
}
