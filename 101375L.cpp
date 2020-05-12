#include <iostream>
//#include <string>

using namespace std;

int main()
{
  unsigned long int n,sum=0;
  cin>>n;
  int a[n],od;
  bool flag=0;
  for(int i=0; i<n; i++)
    {
      cin>>a[i];
      sum+=a[i];
      if(flag==0 && a[i]%2==1){
	od=a[i];
	flag=1;
      }
      if(a[i]<od && a[i]%2==1)
	od=a[i];
    }
  if(sum%2==1)
    sum-=od;
  cout<<sum<<endl;
  
  return 0;
}
