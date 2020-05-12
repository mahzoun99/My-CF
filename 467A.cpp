#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, count=0;
  cin>>n;
  int all[n], free[n];
  for(int i=0; i<n; i++)
    {
      cin>>free[i]>>all[i];
      if(all[i]-free[i]>=2)
	count++;
    }
  cout<<count;
  return 0;
}
