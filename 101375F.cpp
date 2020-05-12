
#include <iostream>
//#include <string>

using namespace std;

int main()
{
  long long n,sum=0;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++)
    {
      cin>>a[i];
      sum+=a[i];
    }
  if(sum%5 != 0)
    cout<< sum/5+1;
  else
    cout<< sum/5;
  
  return 0;
}
